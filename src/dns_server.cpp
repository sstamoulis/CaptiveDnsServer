#include "dns_server.h"

extern "C"
{
    DnsServer * dns_server_init(dns_config_t config)
    {
        return new DnsServer(config);
    }

    void dns_server_deinit(DnsServer * server) {
        delete server;
    }
}

class DnsServer
{
private:
public:
    DnsServer(dns_config_t config);
    ~DnsServer();
};

DnsServer::DnsServer(dns_config_t config)
{
}

DnsServer::~DnsServer()
{
}
