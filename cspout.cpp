#include "Spout2/SPOUTSDK/SpoutLibrary/SpoutLibrary.h"

extern "C" void SetSenderName(SPOUTHANDLE handle, const char* sendername = nullptr) {
	handle->SetSenderName(sendername);
}
