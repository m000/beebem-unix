/* Teletext Support for Beebem */

extern char TeleTextAdapterEnabled;

void TeleTextWrite(int Address, int Value);
int TeleTextRead(int Address);
void TeleTextPoll(void);
void TeleTextLog(const char *text, ...);
void TeleTextInit(void);
