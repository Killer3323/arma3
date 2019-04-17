/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

//Customize your settings, to fit your server setup!
class Maverick_ServerRestartEvent {

    //Should the automatic activation be enabled?
    AutoRestart            = 1;   // 0 = No | 1 = yes

    //How many seconds does it take until the server restarts
    ServerRestartTime      = 21600;// 14400 = 6 hour restarts

    //If you want to play a music enter the name you defined in the description.ext here (playSound is used!)
    //The restart/event is around 85 seconds, so maybe make the sound the same length
    RestartSound           = "restart.ogg";

    //Messages shown as hint in-game to inform the players [Can be formatted]
	MessageRestartAnnounce = "<t size='1.4'>Restart</t><br/><br/><t size='1.25'>Restart en 5 minutos!</t>";
	MessageRestartInit     = "<t size='1.4'>Restart</t><br/><br/><t size='1.25'>Volveremos en un momento!</t>";
	MessageEventInit       = "<t size='1.4'>Evento</t><br/><br/><t size='1.25'>Escondete o moriras!</t>";
};