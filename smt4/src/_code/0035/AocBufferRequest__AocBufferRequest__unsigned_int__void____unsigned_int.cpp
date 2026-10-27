#include "addon/AocBufferRequest.h"

// Bind the source and backing buffer; no request has started yet.
AocBufferRequest::AocBufferRequest(u32 source, void *buffer, u32 size)
    : AocRequestBase(source), size(size)
{
    state = 0;
    this->buffer = buffer;
}
