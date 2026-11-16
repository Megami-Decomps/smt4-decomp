/* Tail call into the function that follows. */
#include "addon/LookupRecord.h"

extern "C" {

Table01Record *FUN_00180114(u32 id)
{
    return dataTable01GetRecordWithAocOverride(id);
}

}
