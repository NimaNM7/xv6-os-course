#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/sysinfo_data.h"

int
main(int argc, char *argv[])
{   
    struct sysinfo_data info;
    if(sysinfo(&info) < 0) {
        printf("sysinfo Call Failed!\n");
        return -1;
    }
    printf("Running Processes: %d\n", info.running_processes);
    printf("Free Memory: %d\n", info.free_memory);
    return 0;
}