#include "addon/AocBufferRequest.h"

// Bind the auxiliary request to its source and backing buffer.
AocAuxBufferRequest::AocAuxBufferRequest(u32 source, void *buffer, u32 size)
    : AocRequestBase(source), size(size)
{
    state = 0;
    this->buffer = buffer;
}
