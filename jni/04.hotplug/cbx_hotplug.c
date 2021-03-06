#include <stdio.h>
#include <syslog.h>

extern char **environ ;

int main(int argc, char const *argv[])
{
    /* code */
    char **var ;

    syslog(LOG_INFO | LOG_LOCAL0, "--------------------") ;
    syslog(LOG_INFO | LOG_LOCAL0, "argv[1] = %s\n", argv[1]) ;

    for( var = environ; *var != NULL; ++var){
        syslog(LOG_INFO | LOG_LOCAL0, "env = %s\n", *var) ;
    }

    syslog(LOG_INFO | LOG_LOCAL0, "--------------------") ;
    
    return 0;
}
