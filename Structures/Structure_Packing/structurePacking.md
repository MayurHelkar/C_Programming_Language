Structure padding - Adding extra empty bytes in memory to align data properly.
Helps the CPU access data faster by reducing read cycles.
The size of a structure is not always equal to the sum of its members’ sizes 
because of structure padding.

Structure packing - Remove these extra bytes to save memory.
Forces the compiler to store members without gaps.
It can be done using: #pragma pack(1)
__attribute((packed))__
