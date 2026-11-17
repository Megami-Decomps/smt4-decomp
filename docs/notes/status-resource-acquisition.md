# Shared status-screen resource acquisition

`statusAcquireSharedResources` (IV `0x0028c040`, Apocalypse `0x002c7e6c`) initializes the shared
status-screen instance on its first reference and increments its reference count.

The reconstruction restores the allocation and task-creation results, the full
work-area clear, and the floating-point argument to `positionStateSet`. The
partner-file requests use the same captured owner for both output slots, as the
native code does. The model count and sentinel byte are signed, consistent with
the update and release paths.

The three ordinary file-local animation arrays use the existing sprite types:

| Game | Array | Original address | Bytes |
| --- | --- | --- | --- |
| IV | Position keys | `0x00407728` | 180 |
| IV | Alpha keys | `0x004077dc` | 144 |
| IV | Animation commands | `0x0040786c` | 840 |
| Apocalypse | Position keys | `0x005362a8` | 228 |
| Apocalypse | Alpha keys | `0x0053638c` | 204 |
| Apocalypse | Animation commands | `0x00536458` | 1008 |

Each compiled array was independently compared, in full, with the original image.
The standard linker proof also places the compiled `.constdata` at `0x00407728`
(IV, 1,164 bytes) and `0x005362a8` (Apocalypse, 1,440 bytes), including them in
the byte-identical rebuilt images. This is not a
claim based only on the instruction comparison.

Validation uses the stock compiler and project workflow:

- `tools/fdiff.py smt4 statusAcquireSharedResources`: identical, 362 rows.
- `tools/fdiff.py smt4a statusAcquireSharedResources`: identical, 435 rows.
- Full-project report: function and section both 100%.
- Ordinary `tools/relink.py --matched`: function listed as proven; rebuilt
  `.code` equals the original. IV SHA-256:
  `30c2fde6c31bdf2c2b08c74183523118a5eec048f0e0bf48f5b46fd136c495a1`.
  Apocalypse SHA-256:
  `0b5338c4eace771ae809a06977a785ea4e00fd41c63e58d3f05fa6a255561bbe`.
- Each local full compile retains three pre-existing host failures: one compiler
  host failure and two overlong source paths. None is changed by this work.

No special compiler flags, altered match selection, or instruction patching was
introduced for this function.
