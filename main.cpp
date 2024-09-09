#include "tp_stub.h"

static void InitPlugin_WIN32Dialog()
{
	TVPExecuteScript(
		TJS_W("class WIN32Dialog {")
		TJS_W("	function messageBox(message, caption, type) {return !System.inform(message, caption, 2);}")
		TJS_W("}")
		);
}