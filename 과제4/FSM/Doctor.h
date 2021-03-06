// ***********************************************
// **            인공지능 과제4. FSM				**
// **            2016180007김명규               **
// ***********************************************

#pragma once

#include "BaseEntity.h"
#include "StateMachine.h"

class Doctor : public BaseEntity
{
public:
	Doctor(int id);
	virtual ~Doctor();

	virtual void Update() override;
	virtual bool IsMessageHandled(const Telegram& telegram) override;

	bool IsBusy() const;

	StateMachine<Doctor>* GetFSM() const { return mStateMachine; }


private:
	StateMachine<Doctor>* mStateMachine;
};

