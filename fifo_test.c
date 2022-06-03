#include "types.h"
#include "user.h"
#include "fcntl.h"

int main() {
    char buf[128];
    int f = open_fifo("fifo", O_RDWR | O_CREATE);
    int pid = fork();
    f = open("fifo", O_RDWR | O_CREATE);
    
    if(pid) { // 父进程
        wait();
        read(f, buf, 12);
        printf(1, "pid: %d read: %s\n", getpid(), buf);
    } 
    else {
        write(f, "hello fifo!\n", 12);
        printf(1, "pid: %d write into fifo!\n", getpid());
    }
    exit();
}
