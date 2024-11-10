#ifndef SECRETS_H
#define SECRETS_H

#include <pgmspace.h>

#define SECRET
#define THINGNAME "test1"

const char WIFI_SSID[] = "PUT UR WIFI SSID";
const char WIFI_PASSWORD[] = "WIFI KA PASSWORD";
const char AWS_IOT_ENDPOINT[] = "AWS DOMAIN THAT YOU COPIED";

// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

// Device Certificate                                               
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWjCCAkKgAwIBAgIVAPQwgVtGzQ7qSTXkcx4o7cbSmTXCMA0GCSqGSIb3DQEB
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yNDExMTAxOTUz
MDVaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDLWxnuEg9FYP6wjleo
0qvjw1XnKmZW9urYmeH9YhitlIfhOjOsc/U7tARPgZ5FTRM714b9+gCgkb7W/I1r
fbdV1y9OX8i8oPG9VClCbV7jMd3d0AB0Ulmq/hohKXm4oYuCij4Wkm5sIlhAVSdL
76dJVJ7o9WAO8Mgn9U8mNzJnMWAKmz8K488Ner+Myrjiy9RMsSCJ3H89mZqEiT63
nn2XaebtTCNpNZqMVeV19PkA36tOfkDGaVAX/FhBNolcDAuTMSjaJbPlGMxZDBfE
/3AhkCrnwgQQGX1JPIrPpbPYXs7cVkfAGpLxliwaUfePuidglBb+xkaOL5LvHe+3
ygyBAgMBAAGjYDBeMB8GA1UdIwQYMBaAFNOjfJ+RADsxUbpQD/UC347zC3KKMB0G
A1UdDgQWBBQB7gYA8bM0aIcKfZVBigvMrJlmsjAMBgNVHRMBAf8EAjAAMA4GA1Ud
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAYNQlYKRS8dzteRZxmN5EVIoa
nWH2Ac/4cwcFSkvaJSCrr/3vp/PllxLgMrYAmBB8t6fQ/tLCQLxJvObKTLsUSRbD
QCvW0RmW9CN79IOnPYBOPWukNtSHhrhMguSxXlis02/QZHxil8GRtNyJDmfxzUEs
BaykYOPS7yEn/s3guU4Ig/vNT/HFIWn7Nso2qKCGHh8+u7b+wQ8JieDW5fGFwlbA
GV5sRAU5crrgBniG1HCyMRCcXTZaQcOgwZZ9oFp8KCFFjzejEzaQUQwIfaKL6ry3
lQwvq181XSOdamUN4r+cOty/dx1pn9SUwasO9kArucohe3y9GybI4KHIv0s5hg==
-----END CERTIFICATE-----

)KEY";

// Device Private Key                                               
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEpAIBAAKCAQEAy1sZ7hIPRWD+sI5XqNKr48NV5ypmVvbq2Jnh/WIYrZSH4Toz
rHP1O7QET4GeRU0TO9eG/foAoJG+1vyNa323VdcvTl/IvKDxvVQpQm1e4zHd3dAA
dFJZqv4aISl5uKGLgoo+FpJubCJYQFUnS++nSVSe6PVgDvDIJ/VPJjcyZzFgCps/
CuPPDXq/jMq44svUTLEgidx/PZmahIk+t559l2nm7UwjaTWajFXldfT5AN+rTn5A
xmlQF/xYQTaJXAwLkzEo2iWz5RjMWQwXxP9wIZAq58IEEBl9STyKz6Wz2F7O3FZH
wBqS8ZYsGlH3j7onYJQW/sZGji+S7x3vt8oMgQIDAQABAoIBAHZEhoEaCb2c2qMO
Ndcepw9w1G38D8b2FcFhRbiaq6WQI7KOqezbB73wRS2EQesmF1CPWZguJN09xlK8
UPc6Bz0qR/354QIrTEyDPPfAKhZSMynExe7g0fuLiuDMgVkqwrtp8RApm4TSOKc5
nwAf4hfY2g68XmByEsaCecTNB0hRuTMBM2K9mjzHTQNa/s9JxdGOJTUV6u5SNNOh
BmDUqup0mkPXFYZF4u2dfNPBW8fERs72qa0dTe//bkb0gIQEn5aA8CFT9B9C0aQ2
0soPzRbBsZlugYBglgw4lbwqZewNh7GKflUNtBDiJ0uH/pHZQxm6ExfYtgFAwjF8
kr9aEY0CgYEA/MFQp4wMB8tjvd9z/di2c/vBjCD00QySAkXI0rx25NnJgTIfgNSa
g74+R8qYzY8Sa4pMVOcV8ealSLvGKrZvSJsx6j6x2y1uqNYQqzBujyLNf91AK9S5
eK7dQXWoKs30o8/mjNXI3GU5fm50lwfDGJCE+eKOjAhbI+eUiUp1+C8CgYEAzfdv
PAYNmsrSMn67mthgm3I3aGGoM9k8tvKKU7HzeLIGDcFYMHHARTZ6QG3Xm+RANIIF
TlTN6smblKdHOlc1o4xLT8JqGsXe1JelThFm327k5KJjFxX7z7mlkz3Y5yEbVo7E
6Ot19GBoXStXn6rbxpVZSsh2zDUlWe5kQ06Rak8CgYA6tdC9SmuU9+qQNTJlOYyP
/l+j5BfZ4zibLIiMYtifKfODfhgRPdEyXuNqm6XIwb3+mt5GLnNLgE7OSUerrjrF
O79pcOyxQ6lbsHWovhRATU48sDDyvXPjk4KzbNgGMVbtIiKkfhgtEZo8Qv30AwqP
TyqEPNrtrhc1jNpU1aX3YwKBgQCGPIKhsyxAu3l9cX2h8O4dwbX88NDoYeghMDgZ
TjxpaFVrt5xbjneKZHQO88f3ES8LScZdhAXkxNsCaneQvW/3FKOs6v+uTVHqap9R
HyRV8Pd7T56XWDuS6eLQ8RkhokEoC8qoJ3Xr/L1oI6xrIrc0WPgmNjq+4tBiKW3t
NBKwHwKBgQCVhC85Wq1rz8R0UBcQg7jdiyQy7obxc66DrUVeennnSnFjMdpT4huN
CQSRh4N1NnpDEcpuQSnNPt2JBqyE8XFJLeCCZdJeDXBnByBnE0m8IXwRzJ26EcgN
zk8ZyZxTYD0Y0QxV61LWBcGfIJ1oVVJ8BO/Sz4IfzufQljx0L66NfQ==
-----END RSA PRIVATE KEY-----

)KEY";

#endif
