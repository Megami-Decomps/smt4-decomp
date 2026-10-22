#include "classes/SelectionState.h"

/* An empty rectangle has no selected item. */
SelectionRectangle::SelectionRectangle()
    : x(0.0f), y(0.0f), width(0.0f), height(0.0f), selection(-1)
{
}
