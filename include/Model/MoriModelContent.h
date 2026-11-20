/* Model/MoriModelContent.cpp (Apocalypse): a model's content, the 0x20-byte holder of everything one
 * model is made of: the file it is loaded from, the model resource loaded from it, the model body
 * (the object the scene draws and the controller functions move) and the body's binding object.
 *
 * modelListInit constructs it in place (vtable 0x557c38, `_ZTV9Obj4207d0`, address point +8; its
 * deleting destructor is FUN_0040ac3c, vtable slot 1, so owners release it with `delete`).
 * resourceOwnerLoadFileSync reads the file, moriModelContentLoadBody creates the resource and the
 * body from it. The three request settings are passed on to the resource request and can only be
 * changed while there is no body (FUN_0040ab7c, moriModelContentSetRequestFirst, moriModelContentSetRequestSecond). */
#ifndef MODEL_MORIMODELCONTENT_H
#define MODEL_MORIMODELCONTENT_H

#include "common.h"
#include <stddef.h>

class Obj557b18;    /* the model body, 0x26C bytes (classes/Obj557b18.h), created at MoriModelContent.cpp:239 */
class Obj557b58;    /* the body's binding object, 0x1C bytes, created at MoriModelContent.cpp:251 */
class Obj557d00;    /* the model resource loaded from the file (classes/Obj557d00.h) */

class MoriModelContent {
public:
    virtual ~MoriModelContent();

    /* 0x00: vtable pointer */
    /* 0x04 */ Obj557b18 *body;         /* NULL until the body is created; locks the request settings */
    /* 0x08 */ Obj557b58 *binding;
    /* 0x0C */ Obj557d00 *resource;     /* the model resource created from `file` */
    /* 0x10 */ void *file;              /* the loaded model file; NULL while not loaded */
    /* 0x14 */ u32 requestMode;         /* passed as the resource request's mode byte */
    /* 0x18 */ u32 requestFirst;        /* the request's first setting (+0x08, request default 0x30000) */
    /* 0x1C */ u32 requestSecond;       /* the request's second setting (+0x0C) */
};

typedef char MoriModelContentLayoutCheck[offsetof(MoriModelContent, body) == 0x04 &&
    offsetof(MoriModelContent, resource) == 0x0C && offsetof(MoriModelContent, file) == 0x10 &&
    offsetof(MoriModelContent, requestSecond) == 0x1C && sizeof(MoriModelContent) == 0x20 ? 1 : -1];

extern "C" {

/* Constructs a content in `storage` (0x20 bytes): no file, no body, unit request settings. */
MoriModelContent *modelListInit(void *storage);
/* The deleting destructor: unregisters and deletes the body, the binding and the resource. */
void FUN_0040ac3c(MoriModelContent *content);

/* Loads the content's file (synchronously) by name. */
void resourceOwnerLoadFileSync(MoriModelContent *content, const char *name);
/* Creates the resource from the file and the body from the resource, attached to `parent` (NULL
 * for a model of its own); nothing when no file is loaded. */
void moriModelContentLoadBody(MoriModelContent *content, Obj557b18 *parent);
/* Creates the resource for `id` and the binding object. */
void FUN_0040a884(MoriModelContent *content, u32 id);
/* Creates the body from the already created resource. */
void moriModelContentCreateBody(MoriModelContent *content, Obj557b18 *parent);
/* Creates the binding object over the resource. */
void moriModelContentCreateBinding(MoriModelContent *content);
/* Creates the resource for `id`. */
void FUN_0040a9a0(MoriModelContent *content, u32 id);
/* Creates the resource from the file, if one is loaded. */
void FUN_0040a9fc(MoriModelContent *content);
/* Creates the resource from the file, sharing it. Callers pass a second resource (the content's
 * resource being linked) that the recovered body does not read. */
void FUN_0040ab9c(MoriModelContent *content, Obj557d00 *linked);
/* Creates the body over another content's resource. */
void moriModelContentCopyBody(MoriModelContent *content, MoriModelContent *source, Obj557b18 *parent);

/* Request settings; ignored once the body exists. */
void FUN_0040ab7c(MoriModelContent *content, u32 mode);
void moriModelContentSetRequestFirst(MoriModelContent *content, u32 value);
void moriModelContentSetRequestSecond(MoriModelContent *content, u32 value);
/* Whether the content's file is loaded. */
u8 moriModelContentIsLoaded(MoriModelContent *content);

}

#endif
