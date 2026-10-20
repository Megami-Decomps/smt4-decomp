#include "shard/Shard0034.h"

extern "C" {

/* Advances the view's cursor. */
void asdListBoxViewRefresh(ViewCursor *view)
{
    view->cursor++;
}

} /* extern "C" */
