#include "Mono16BitManager.h"

Mono8BitManager::Mono8BitManager(/* args */)
{
}

Mono8BitManager::~Mono8BitManager()
{
}

void Mono16BitManager::captureData(const std::string &fileName) {
    std::ifstream file(fileName,std::ios::binary | std::ios::in);
    if(file.is_open()){
        file.read((char*)&header, sizeof(Header));
        Mono8BitManager::buffer = new unsigned char[header.data_bytes];
        file.read((char*)buffer, header.data_bytes);
        file.read((char*)&metadata, sizeof(MetaData));
    }

}

void Mono16BitManager::print(){
    std::cout << header.riff_header << std::endl;
    std::cout << header.wav_size << std::endl;
    std::cout << header.fmt_header << std::endl;
    std::cout << header.fmt_chunk_size << std::endl;
    std::cout << header.audio_format << std::endl;
    std::cout << header.num_channels << std::endl;
    std::cout << header.byte_rate << std::endl;
    std::cout << header.sample_rate << std::endl;
    std::cout << metadata.list_header << std::endl;
    std::cout << metadata.meta_size << std::endl;
    std::cout << metadata.info_header << std::endl;
    std::cout << metadata.meta_sub1 << std::endl;
    std::cout << metadata.sub1_characters << std::endl;
    std::cout << metadata.sub1_data << std::endl;
}
