#ifndef PROC_INJECT_T
#define PROC_INJECT_T 1

#ifdef __cplusplus
extern "C" {
#endif

/*
1、向目标进程发送SIGSTOP信号，让目标进程挂起
2、读取 /proc/[pid]/syscall文件，获取目标进程此时PC的地址
3、执行注入操作
    -注入器首先要保存目标进程pc处开始的shellcode长度的数据
    -向 /proc/[pid]/mem 的pc地址处写入shellcode
    -shellcode首先要保存现场
    -shellcode调用dlopen
    -shellcode想办法再次阻塞进程(比如向目标进程再次发送SIGSTOP)，将进程的控制权交给注入器
4、恢复目标进程
    -首先要将pc还原
    -向目标进程发送SIGCONT信号，让目标进程恢复
*/


#ifdef __cplusplus
}
#endif

#endif //PROC_INJECT_T