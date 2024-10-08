#include <TCPKernel.h>



int main(int argc,char *argv[])
{
    int port = 8080;
    if( argc >= 2 )
    {
        port = atoi(argv[1]);
    }
    TcpKernel * pKernel =  TcpKernel::GetInstance();

    //开启服务 给定端口, 可以使用输入的port
    pKernel->Open( 8080 );
    cout << "port:" << port << endl ;
    // 事件循环 : 循环监听事件
    pKernel->EventLoop();

    pKernel->Close();

    return 0;
}
