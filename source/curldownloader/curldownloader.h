#ifndef NXMP_CURLDOWNLOADER_H
#define NXMP_CURLDOWNLOADER_H

#include <curl/curl.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include "logger.h"

struct MemoryStruct {
  unsigned char *memory;
  size_t size;
};


class curlDownloader{
public:
	curlDownloader();
	void Download(char * url ,MemoryStruct * chunk);
	std::string scrapeHtml (std::string myurl, std::string postcode, bool needpost, std::string referer, bool needreferer);
	std::string getRedirection (std::string myurl, std::string postcode, bool needpost, std::string referer, bool needreferer);
	
};


class SOAPcurlDownloader{
public:
	SOAPcurlDownloader();
	void Download(char * url ,MemoryStruct * chunk, char * OID);
	
};




#endif
