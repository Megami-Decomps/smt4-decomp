/* Tail call into the function that follows. */
#include "addon/LookupRecord.h"

extern "C" {

Table01Record *table01RecordLookupForContent(u32 id)
{
    return dataTable01GetRecordWithAocOverride(id);
}

}
