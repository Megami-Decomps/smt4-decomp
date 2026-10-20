/* NON_MATCHING: instruction order only: retail conditionally initializes the loop index (`movne r4, #0` after `cmp`), the build moves it to the shared zero register before the compare. */
#include "common.h"
#include "shard/S3AsdModelAttr.h"

extern "C" {

void resourceListDestroy(void *handle);
void asdMemFree(void *ptr);
void FUN_0014edd0(AsdModelAttrModel *model, u8 *data, s32 key);

/* Releases the model's attribute records, then rebuilds them for `key`. */
void FUN_0014ed58(AsdModelAttrModel *model, s32 key)
{
    for (s32 i = 0; i < model->records.count; i++) {
        AsdModelAttrRecord *record = &model->records.items[i];

        resourceListDestroy(record->handle);
        record->handle = NULL;
    }
    if (model->records.items != NULL) {
        asdMemFree(model->records.items);
        model->records.items = NULL;
    }
    model->records.count = 0;
    FUN_0014edd0(model, model->file->data, key);
}

} /* extern "C" */
