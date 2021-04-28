/** @file */
#include <iostream>
#include "Mono8BitManager.h"
#include "PreprocessManager.h"

/**
 * \brief   The function bar.
 *
 * \details This function does something which is doing nothing. So this text
 *          is totally senseless and you really do not need to read this,
 *          because this text is basically saying nothing.
 *
 * \note    This text shall only show you, how such a \"note\" section
 *          is looking. There is nothing which really needs your notice,
 *          so you do not really need to read this section.
 *
 * \param[in]     a    Description of parameter a.
 * \param[out]    b    Description of the parameter b.
 * \param[in,out] c    Description of the parameter c.
 *
 * \return        The error return code of the function.
 *
 * \retval        ERR_SUCCESS    The function is successfully executed
 * \retval        ERR_FAILURE    An error occurred
 */
void fn(){

}

int main() {
    PreprocessManager *preprocessManager = new PreprocessManager();
    AudioManager *eightbitone = new Mono8BitManager();
    //AudioManager *sixteenbitone = new Mono16BitManager();
    //AudioManager eightbittwo = new Stereo8BitManager();
    //AudioManager sixteenbittwo = new Stereo16BitManager();
    preprocessManager->captureData("yes-8-bit-stereo.wav");
    int bitRate = preprocessManager->processBitrate();
    switch (bitRate)
    {
    case 8:
        eightbitone->captureData("yes-8-bit-mono.wav");
        eightbitone->print();
        break;
    case 16:
        std::cout << "FAIL";
        break;
    default:
        break;
    }
    return 0;
}
