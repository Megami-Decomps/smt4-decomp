#include "classes/WindowOperation.h"

WindowOperationResult::WindowOperationResult(u8 initialStatus)
    : status(initialStatus), first(0), second(0)
{
    result = WindowStatusResult(0);
}
