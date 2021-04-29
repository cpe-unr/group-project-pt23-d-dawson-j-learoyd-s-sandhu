#ifndef MONO16BITMANAGER_CODE
#define MONO16BITMANAGER_CODE

#include "AudioManager.h"
#include <iostream>

class Mono16BitManager : public AudioManager
{
private:
    unsigned char* buffer;
public:
    Mono16BitManager(/* args */);
    ~Mono16BitManager();
    void captureData(const std::string &fileName) override;
    void print() override;
};

#endif // MONO16BITMANAGER_CODE
