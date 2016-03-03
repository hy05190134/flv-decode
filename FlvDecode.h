//
// Created by Hank on 2016/3/2.
//

#ifndef FLV_DECODE_FLVDECODE_H
#define FLV_DECODE_FLVDECODE_H
#include "./app/FlvLog.h"
#include "./protocol/FlvHeader.h"
#include "./protocol/FlvPackage.h"

static const int32_t MAX_SIZE_OF_BUFFER_READ_FROM_FILE = 4096;

class FlvDecode
{
public:
    FlvDecode();
    virtual ~FlvDecode();
private:
	// buffer 
	char* read_buffer_;
	// one header
	FlvHeader flv_header_;
	// lots of packages
	std::vector<FlvPackage*> flv_package_list_;
public:
    void decode_flv_file(std::string filename);
};


#endif //FLV_DECODE_FLVDECODE_H