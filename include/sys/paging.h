enum PAGE_FLAGS {
    PAGING_PRESENT		=   1UL,
	PAGING_WRITABLE		=   2UL,
	PAGING_USER			=   4UL,
	PAGING_PWT			=   8UL,
	PAGING_PCD			=   0x10UL,
	PAGING_ACCESSED		=   0x20UL,
	PAGING_IGN			=   0x40UL,
	PAGING_ZERO			=   0UL,
	PAGING_ING2			=   0x100UL,
	PAGING_MBZ_PML4		=   0x180UL,
	PAGING_AVL			=   0xD00UL,
    PAGING_ADDR			=   0x000FFFFFFFFFF000UL,
    PAGING_AVAILABLE	=   0x3FF0000000000000UL,
    PAGING_COW			=   0x4000000000000000UL,
    PAGING_NX			=   0x8000000000000000UL,
    PAGING_FLAGS		=   0xFFF0000000000FFFUL
};

#define RW_KERNEL_FLAGS (PAGING_PRESENT | PAGING_WRITABLE)
#define RX_USER_FLAGS (PAGING_PRESENT | PAGING_USER)
#define RW_USER_FLAGS (PAGING_PRESENT | PAGING_USER | PAGING_WRITABLE)

#define IS_PRESENT_PAGE(entry)  ((entry) & PAGING_PRESENT)
#define IS_WRITABLE_PAGE(entry) ((entry) & PAGING_WRITABLE)
#define IS_USER_PAGE(entry)     ((entry) & PAGING_USER)
#define IS_PWT_PAGE(entry)      ((entry) & PAGING_PWT)
#define IS_PCD_PAGE(entry)      ((entry) & PAGING_PCD)
#define IS_ACCESSED_PAGE(entry) ((entry) & PAGING_ACCESSED)
#define IS_IGN_PAGE(entry)      ((entry) & PAGING_IGN) 
#define IS_ZERO_PAGE(entry)     ((entry) & PAGING_ZER0)
#define IS_COW_PAGE(entry)      ((entry) & PAGING_COW)
#define IS_NX_PAGE(entry)       ((entry) & PAGING_NX)

void init_paging(uint64_t, uint64_t, uint64_t);
void map_virt_phys_addr(uint64_t,uint64_t, uint64_t);

uint64_t* get_ker_pml4_t();
uint64_t* get_pte_entry(uint64_t);

uint64_t create_new_pml4();
void empty_page_tables(uint64_t pml4_t);


#define set_present_bit(entry)    *entry = *entry | PAGING_PRESENT
#define unset_present_bit(entry)  *entry = *entry & 0xFFFFFFFFFFFFFFFEUL
#define set_writable_bit(entry)   *entry = *entry | PAGING_WRITABLE
#define unset_writable_bit(entry) *entry = *entry & 0xFFFFFFFFFFFFFFFDUL
#define set_cow_bit(entry)        *entry = *entry | PAGING_COW
#define unset_cow_bit(entry)      *entry = *entry & 0xBFFFFFFFFFFFFFFFUL
