#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
  for(int i=0;i<5;i++) 
    {
      sleep(1);
      pid_t zombie = fork();
      printf("PID: %d\n", zombie);
      if(zombie>0)
      {
        sleep(5);
        //parent        
      }
      else {
        printf("\nZzZombie %d\n",i);
        exit(0);
        //child
      }
    }
  return 0;
  
}