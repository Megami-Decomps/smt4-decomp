#include "common.h"

extern "C" void _ZN9Obj55aff4C1EPKc(void *object, const char *text);

// Construct the authentication-info label, whose storage is UTF-16LE.
extern "C" void _ZN9Obj55a25411getTypeNameEv(void *object)
{
    _ZN9Obj55aff4C1EPKc(object, "A\0u\0t\0h\0e\0n\0t\0i\0c\0a\0t\0i\0o\0n\0I\0n\0f\0o\0\0");
}
