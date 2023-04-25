#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main -Process ID that passes betty checks
 * pproid is parent process ID
 * Return: Always 0 (Return)
 */
int main(void)
{
	pid_t pro_id;
	pid_t ppro_id;

	pro_id = getpid();
	ppro_id = getppid();

	printf("PID: %u\n", pro_id);
	printf("PPID: %u\n", ppro_id);

	return (0);
}
