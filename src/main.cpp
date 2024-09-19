#include <pcap.h>
#include <iostream>

int main()
{
    std::array<char, PCAP_ERRBUF_SIZE> errbuf{};
    if (auto dev = pcap_lookupdev(errbuf.data()); dev)
    {
        std::cout << dev << std::endl;
        return 1;
    }
    
    std::cout << errbuf << std::endl;
    return 0;
}
