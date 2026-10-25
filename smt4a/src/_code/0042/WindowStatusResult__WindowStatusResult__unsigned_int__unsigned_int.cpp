#include "classes/WindowStatus.h"

/* Preserve an already translated result code and description. */
WindowStatusResult::WindowStatusResult(u32 code, u32 description)
    : code(code), description(description)
{
}
