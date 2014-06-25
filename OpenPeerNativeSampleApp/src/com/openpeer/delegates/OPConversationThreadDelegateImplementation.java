package com.openpeer.delegates;

import android.util.Log;

import com.openpeer.javaapi.ContactStates;
import com.openpeer.javaapi.MessageDeliveryStates;
import com.openpeer.javaapi.OPContact;
import com.openpeer.javaapi.OPConversationThread;
import com.openpeer.javaapi.OPConversationThreadDelegate;
import com.openpeer.javaapi.OPMessage;
import com.openpeer.javaapi.test.OPTestConversationThread;

public class OPConversationThreadDelegateImplementation extends
		OPConversationThreadDelegate {

	@Override
	public void onConversationThreadNew(OPConversationThread conversationThread) {
		// TODO Auto-generated method stub

	}

	@Override
	public void onConversationThreadContactsChanged(
			OPConversationThread conversationThread) {
		// TODO Auto-generated method stub
		//OPTestConversationThread.testCall("idemooooo");
		Log.d("output", "onConversationThreadContactsChanged");

	}

	@Override
	public void onConversationThreadContactStateChanged(
			OPConversationThread conversationThread, OPContact contact,
			ContactStates state) {
		// TODO Auto-generated method stub
		Log.d("output", "onConversationThreadContactStateChanged  state = " + state.toString());
	}

	@Override
	public void onConversationThreadMessage(
			OPConversationThread conversationThread, String messageID) {
		// TODO Auto-generated method stub
		Log.d("output", "onConversationThreadMessage = " + messageID);
		
		OPMessage message = conversationThread.getMessage(messageID);
		
		Log.d("output","Message received from " + message.getFrom());
		Log.d("output","Message received type " + message.getMessageType());
		Log.d("output","Message received time " + message.getTime().toString());
		Log.d("output","Message received =  " + message.getMessage());
	}

	@Override
	public void onConversationThreadMessageDeliveryStateChanged(
			OPConversationThread conversationThread, String messageID,
			MessageDeliveryStates state) {
		// TODO Auto-generated method stub
		Log.d("output", "onConversationThreadMessageDeliveryStateChanged = " + messageID + "state = " + state.toString());

	}

	@Override
	public void onConversationThreadPushMessage(
			OPConversationThread conversationThread, String messageID,
			OPContact contact) {
		// TODO Auto-generated method stub
		Log.d("output", "onConversationThreadPushMessage = " + messageID);
	}

}