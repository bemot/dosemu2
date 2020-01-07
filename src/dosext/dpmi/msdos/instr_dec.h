#ifndef INSTR_DEC_H
#define INSTR_DEC_H

int decode_segreg(sigcontext_t *scp);
uint16_t decode_selector(sigcontext_t *scp);
int decode_memop(sigcontext_t *scp, uint32_t *op);
int decode_memaddr(sigcontext_t *scp, uint8_t **addr, uint16_t **saddr);

#endif
