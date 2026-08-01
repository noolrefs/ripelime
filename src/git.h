#ifndef git
#define git

typedef char Url[512];
typedef char Result;

Result is_environment_ready();
Result clone(Url url);
Result send_data();
#endif