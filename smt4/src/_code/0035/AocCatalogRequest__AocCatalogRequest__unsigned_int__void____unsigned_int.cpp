#include "addon/AocBufferRequest.h"

/* Binds the temporary catalog request to its caller-owned buffer. */
AocCatalogRequest::AocCatalogRequest(u32 source, void *buffer, u32 size)
    : AocRequestBase(source), size(size)
{
    state = 0;
    this->buffer = buffer;
}
