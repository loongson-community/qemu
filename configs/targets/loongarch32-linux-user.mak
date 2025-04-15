# Default configuration for loongarch32-linux-user
TARGET_ARCH=loongarch64
TARGET_BASE_ARCH=loongarch
TARGET_ABI_DIR=loongarch
TARGET_ABI32=y
TARGET_XML_FILES=gdb-xml/loongarch-base32.xml gdb-xml/loongarch-fpu.xml gdb-xml/loongarch-lsx.xml gdb-xml/loongarch-lasx.xml
TARGET_SYSTBL=syscall.tbl
TARGET_SYSTBL_ABI=common,32
TARGET_LONG_BITS=64
