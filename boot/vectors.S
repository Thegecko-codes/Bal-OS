.section ".text"
.global vector_table
.balign 2048

vector_table:
  //1. for EL1 -> SP_EL0 not to be used
  .balign 128 //sync
    b unhandled
  .balign 128 //irq
    b unhandled
  .balign 128 //fiq
    b unhandled
  .balign 128 //serror
    b unhandled

  //2. for EL1 -> SP_EL1
  .balign 128 //sync
    b unhandled
  .balign 128 //irq
    b unhandled //TODO: make this thing irq_handler
  .balign 128 //fiq
    b unhandled
  .balign 128 //serror
    b unhandled

  //3. for EL0 (64-bit) not to be used
  .balign 128 //sync
    b unhandled
  .balign 128 //irq
    b unhandled
  .balign 128 //fiq
    b unhandled
  .balign 128 //serror
    b unhandled

  //4. for EL0 (32-bit) old code, not to be used
  .balign 128 //sync
    b unhandled
  .balign 128 //irq
    b unhandled
  .balign 128 //fiq
    b unhandled
  .balign 128 //serror
    b unhandled

unhandled:
  wfe
  b unhandled
