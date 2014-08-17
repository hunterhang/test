#include "Lock.h"


//��̬��ʽ��ʼ��������
CMutex::CMutex()
{
	pthread_mutex_init(&m_mutex, NULL);
}

//ע��������
CMutex::~CMutex()
{
	pthread_mutex_destroy(&m_mutex);
}

//ȷ��ӵ�л��������̶߳Ա�������Դ�Ķ��Է���
void CMutex::Lock() const
{
	pthread_mutex_lock(&m_mutex);
}

//�ͷŵ�ǰ�߳�ӵ�е�������ʹ�����߳̿���ӵ�л��������Ա�������Դ���з���
void CMutex::Unlock() const
{
	pthread_mutex_unlock(&m_mutex);
}

//����C++���ԣ������Զ�����
CMyLock::CMyLock(const ILock& m) : m_lock(m)
{
	m_lock.Lock();
}

//����C++���ԣ������Զ�����
CMyLock::~CMyLock()
{
	m_lock.Unlock();
}
