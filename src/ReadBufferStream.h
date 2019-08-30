#ifndef __ReadBufferStream_H__
#define __ReadBufferStream_H__

#include "BaseBufferStream.h"

class ReadBufferStream : public BaseBufferStream {
	public:
		explicit ReadBufferStream(void *buff, size_t len);

	public:
		virtual int available();
		virtual int read();
		virtual int peek();
};

#endif
