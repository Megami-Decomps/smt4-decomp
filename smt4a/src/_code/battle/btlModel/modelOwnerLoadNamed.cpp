#include "common.h"
struct ModelOwner {
    void *model; /* 0x00 */
    char name[1]; /* 0x04 */
};
extern "C" {
char *libc_strcpy(char *destination, const char *source);
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
void *modelListInit(void *allocation);
void modelLoadFileAsyncByName(void *model, const char *name);

/* Copies the model name and creates its model-list object. */
void modelOwnerLoadNamed(ModelOwner *owner, const char *name)
{
    libc_strcpy(owner->name, name);
    void *model = asdMemoryAllocTraced(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlModel.cpp", 68);
    if (model != NULL) {
        model = modelListInit(model);
    }
    owner->model = model;
    modelLoadFileAsyncByName(model, name);
}

} /* extern "C" */
