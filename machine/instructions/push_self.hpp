#include "interpreter/instructions.hpp"

inline void rubinius::instruction_push_self(CallFrame* call_frame) {
  stack_push(call_frame->self());
}