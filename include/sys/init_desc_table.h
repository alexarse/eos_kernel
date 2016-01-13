
// The Global Descriptor Table or GDT is a data structure used by Intel
// x86-family processors starting with the 80286 in order to define the 
// characteristics of the various memory areas used during program execution,
// including the base address, the size and access privileges like 
// executability and writability. These memory areas are called segments 
// in Intel terminology.
void init_gdt();

// The Interrupt Descriptor Table (IDT) is a data structure used by the x86
// architecture to implement an interrupt vector table. The IDT is used by the 
// processor to determine the correct response to interrupts and exceptions.
void init_idt();

// The function of the 8259A is actually relatively simple. Each PIC has 
// 8 input lines, called Interrupt Requests (IRQ), numbered from 0 to 7. When
// one of these lines goes high, the PIC alerts the CPU and sends the
// appropriate interrupt number. This number is calculated by adding the IRQ
// number (0 to 7) to an internal "vector offset" value. The CPU uses this
// value to execute an appropriate Interrupt Service Routine.
void init_pic();

// The task state segment (TSS) is a special structure on x86-based computers
// which holds information about a task. It is used by the operating system
// kernel for task management. Specifically, the following information is
// stored in the TSS:
// 	- Processor register state
// 	- I/O port permissions
// 	- Inner-level stack pointers
// 	- Previous TSS link
void init_tss();

void set_tss_rsp0(uint64_t rsp);
