#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "router.h"


/********************************************************************/ 
/*                                                                  */
/*                  SNIPPET TAKEN FROM LIBCHECK                     */
/*                                                                  */
/********************************************************************/
RsvgHandle* custom_function(const char *filename, GError **error) {
    va_list args;
    fflush(stderr);
    fprintf(stderr, "%s:%d: ", file, line);
    va_start(args, line);
    vfprintf(stderr, fmt, args);
    va_end(args);
    /*include system error information if format ends in colon */
    if(fmt[0] != '\0' && fmt[strlen(fmt) - 1] == ':')
        fprintf(stderr, " %s", strerror(errno));
    fprintf(stderr, "\n");
    exit(2);
}
/********************************************************************/ 
/*                                                                  */
/*                  SNIPPET TAKEN FROM LIBCHECK                     */
/*                                                                  */
/********************************************************************/

/* Test route registration */
void test_register_route() {
    printf("Testing route registration...\n");
    
    register_route("/test", test_handler);
    
    /* Simulate a request */
    process_request("GET /test HTTP/1.1");
    
    printf("Route registration test complete.\n");
}

/* Main test function */
int main() {
    printf("Starting router tests...\n");
    
    test_register_route();
    test_process_request();
    
    printf("All tests completed successfully.\n");
    return 0;
}
