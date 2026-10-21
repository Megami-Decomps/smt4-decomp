#include "common.h"
struct ModelOwner {
    void *model; /* 0x00 */
    char name[1]; /* 0x04 */
};
extern "C" {
char *libc_strcpy(char *destination, const char *source);
void *FUN_00178b04(u32 size, const char *file, s32 line);
void *FUN_0040ac08(void *allocation);
void FUN_001cd3ec(void *model, const char *name);

/* Copies the model name and creates its model-list object. */
void FUN_004d881c(ModelOwner *owner, const char *name)
{
    libc_strcpy(owner->name, name);
    void *model = FUN_00178b04(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlModel.cpp", 68);
    if (model != NULL) {
        model = FUN_0040ac08(model);
    }
    owner->model = model;
    FUN_001cd3ec(model, name);
}

} /* extern "C" */
