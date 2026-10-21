#include "shard/W5_W5Match2_LinkedItems.h"
extern "C" {
/* Return the indexed list item, or null if the chain ends first. */
LinkedItem *linkedFindItemByIndex(const LinkedItems *owner,u32 index) { LinkedItem *item=owner->head; while (item!=NULL) { if (index--==0) return item; item=item->next; } return NULL; }
}
