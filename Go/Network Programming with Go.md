# Go: Network Programming with Go

- [1. Architecture](#1-architecture)
- [2. Overview of the Go Language](#2-overview-of-the-go-language)
- [3. Socket-Level Programming](#3-socket-level-programming)
	- [DaytimeServer.go](#daytimeserver.go)
	- [EchoClient.go](#echoclient.go)
	- [GetHeadInfo.go](#getheadinfo.go)
	- [hello.go](#hello.go)
	- [IP.go](#ip.go)
	- [IPDaytimeClient.go](#ipdaytimeclient.go)
	- [IPGetHeadInfo.go](#ipgetheadinfo.go)
	- [IPv4Mask.go](#ipv4mask.go)
	- [LookupHost.go](#lookuphost.go)
	- [LookupPort.go](#lookupport.go)
	- [Mask.go](#mask.go)
	- [Ping.go](#ping.go)
	- [ResolveIP.go](#resolveip.go)
	- [SimpleEchoServer.go](#simpleechoserver.go)
	- [ThreadedEchoServer.go](#threadedechoserver.go)
	- [ThreadedIPEchoServer.go](#threadedipechoserver.go)
	- [UDPDaytimeClient.go](#udpdaytimeclient.go)
	- [UDPDaytimeServer.go](#udpdaytimeserver.go)
	- [UDPEchoClient.go](#udpechoclient.go)
	- [UDPEchoServer.go](#udpechoserver.go)
- [4. Data Serialization](#4-data-serialization)
	- [ASN1.go](#asn1.go)
	- [ASN1basic.go](#asn1basic.go)
	- [ASN1edge.go](#asn1edge.go)
	- [ASN1time.go](#asn1time.go)
	- [ASNDaytimeClient.go](#asndaytimeclient.go)
	- [ASNDaytimeServer.go](#asndaytimeserver.go)
	- [ASNEchoClient.go](#asnechoclient.go)
	- [ASNEchoServer.go](#asnechoserver.go)
	- [Base64.go](#base64.go)
	- [DaytimeServer.go](#daytimeserver.go)
	- [GobEchoClient.go](#gobechoclient.go)
	- [GobEchoServer.go](#gobechoserver.go)
	- [IPDaytimeClient.go](#ipdaytimeclient.go)
	- [JSON.go](#json.go)
	- [JSONEchoClient.go](#jsonechoclient.go)
	- [JSONEchoServer.go](#jsonechoserver.go)
	- [LoadGob.go](#loadgob.go)
	- [LoadJSON.go](#loadjson.go)
	- [myTypes.go](#mytypes.go)
	- [ProtocolBuffer.go](#protocolbuffer.go)
	- [SaveGob.go](#savegob.go)
	- [SaveJSON.go](#savejson.go)
- [5. Application-Level Protocols](#5-application-level-protocols)
	- [FTPClient.go](#ftpclient.go)
	- [FTPServer.go](#ftpserver.go)
	- [test.go](#test.go)
- [6. Managing Character Sets and Encodings](#6-managing-character-sets-and-encodings)
	- [ISO8859.go](#iso8859.go)
	- [norm.go](#norm.go)
	- [StrLength.go](#strlength.go)
	- [UTF16.go](#utf16.go)
	- [UTF16Client.go](#utf16client.go)
	- [UTF16Server.go](#utf16server.go)
	- [UTF8Server.go](#utf8server.go)
- [7. Security](#7-security)
	- [Aes.go](#aes.go)
	- [Blowfish.go](#blowfish.go)
	- [GenRSAKeys.go](#genrsakeys.go)
	- [GenX509Cert.go](#genx509cert.go)
	- [LoadRSAKey.go](#loadrsakey.go)
	- [LoadRSAKeys.go](#loadrsakeys.go)
	- [LoadX509Cert.go](#loadx509cert.go)
	- [MD5Hash.go](#md5hash.go)
	- [MD5HMAC.go](#md5hmac.go)
	- [TLSEchoClient.go](#tlsechoclient.go)
	- [TLSEchoServer.go](#tlsechoserver.go)
	- [TLSGetHead.go](#tlsgethead.go)
	- [tmp.go](#tmp.go)
- [8. HTTP](#8-http)
	- [ClientGet.go](#clientget.go)
	- [FileServer.go](#fileserver.go)
	- [Get.go](#get.go)
	- [Head.go](#head.go)
	- [HTTPSFileServer.go](#httpsfileserver.go)
	- [LowLevelGet.go](#lowlevelget.go)
	- [LowLevelMultipleGet.go](#lowlevelmultipleget.go)
	- [LowLevelServer.go](#lowlevelserver.go)
	- [PersistentClient.go](#persistentclient.go)
	- [PersistentServer.go](#persistentserver.go)
	- [PrintEnv.go](#printenv.go)
	- [ProxyAuthGet.go](#proxyauthget.go)
	- [ProxyGet.go](#proxyget.go)
	- [ServerHandler.go](#serverhandler.go)
	- [TLSClientGet.go](#tlsclientget.go)
	- [TLSUnsafeClientGet.go](#tlsunsafeclientget.go)
- [9. Templates](#9-templates)
	- [PrintEmails.go](#printemails.go)
	- [PrintJSONEmails.go](#printjsonemails.go)
	- [PrintNameEmails.go](#printnameemails.go)
	- [PrintPerson.go](#printperson.go)
	- [PrintPersonAttack.go](#printpersonattack.go)
	- [PrintPersonSafer.go](#printpersonsafer.go)
	- [Sequence.go](#sequence.go)
- [10. A Complete Web Server](#10-a-complete-web-server)
	- [Dictionary.go](#dictionary.go)
	- [Dictionary.total.go](#dictionary.total.go)
	- [FlashCards.go](#flashcards.go)
	- [PrintTest.go](#printtest.go)
	- [Server.go](#server.go)
	- [Serverless.go](#serverless.go)
	- [Dictionary.go](#dictionary.go)
	- [FlashCards.go](#flashcards.go)
	- [PinyinFormatter.go](#pinyinformatter.go)
	- [PinyinFormatter.go](#pinyinformatter.go)
- [11. HTML](#11-html)
	- [EscapeString.go](#escapestring.go)
	- [ReadHTML.go](#readhtml.go)
- [12. XML](#12-xml)
	- [Marshal.go](#marshal.go)
	- [NewMarshal.go](#newmarshal.go)
	- [OldMarshal.go](#oldmarshal.go)
	- [ParseHTML.go](#parsehtml.go)
	- [ParseXML.go](#parsexml.go)
	- [Unmarshal.go](#unmarshal.go)
- [13. Remote Procedure Call](#13-remote-procedure-call)
	- [ArithClient.go](#arithclient.go)
	- [ArithServer.go](#arithserver.go)
	- [ArithServerExp.go](#arithserverexp.go)
	- [JSONArithClient.go](#jsonarithclient.go)
	- [JSONArithServer.go](#jsonarithserver.go)
	- [TCPArithClient.go](#tcparithclient.go)
	- [TCPArithServer.go](#tcparithserver.go)
- [14. REST](#14-rest)
	- [Client.go](#client.go)
	- [ClientJson.go](#clientjson.go)
	- [Server.go](#server.go)
- [15. WebSockets](#15-websockets)
	- [EchoClient.go](#echoclient.go)
	- [EchoClientGorilla.go](#echoclientgorilla.go)
	- [EchoClientTLS.go](#echoclienttls.go)
	- [EchoServer.go](#echoserver.go)
	- [EchoServerGorilla.go](#echoservergorilla.go)
	- [EchoServerTLS.go](#echoservertls.go)
	- [PersonClientJSON.go](#personclientjson.go)
	- [PersonClientProtocol.go](#personclientprotocol.go)
	- [PersonClientXML.go](#personclientxml.go)
	- [PersonServerJSON.go](#personserverjson.go)
	- [PersonServerProtocol.go](#personserverprotocol.go)
	- [PersonServerXML.go](#personserverxml.go)
	- [TemperatureServer.go](#temperatureserver.go)
	- [XML.go](#xml.go)

## 1. Architecture

## 2. Overview of the Go Language

## 3. Socket-Level Programming

### DaytimeServer.go

```go

package main

import (
	"fmt"
	"net"
	"os"
	"time"
)

func main() {

	service := ":1200"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		daytime := time.Now().String()
		conn.Write([]byte(daytime)) // don't care about return value
		conn.Close()                // we're finished with this client
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

```

### EchoClient.go

```go

package main

import (
	"fmt"
	"net"
	"os"
	"runtime"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprint(os.Stderr, "Usage: ", os.Args[0], " host:port\n")
		// fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError("Dial", err)

	for n := 0; n < 10; n++ {
		conn.Write([]byte("Hello " + string(n+48)))

		var buf [512]byte
		n, err := conn.Read(buf[0:])
		checkError("Read", err)

		fmt.Println(string(buf[0:n]))
	}
	os.Exit(0)
}

func checkError(errStr string, err error) {
	if err != nil {
		fmt.Fprint(os.Stderr, errStr, err.Error())
		//log.Exit(errStr+":",  err.Error())
		_, file, line, ok := runtime.Caller(1)
		if ok {
			fmt.Println("Line number", file, line)
		}
		os.Exit(1)
		/*
			fmt.Println("Fatal error ", err.Error())
			os.Exit(1)
		*/
	}
}

```

### GetHeadInfo.go

```go

package main

import (
	"fmt"
	"io/ioutil"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s host:port ", os.Args[0])
		os.Exit(1)
	}
	service := os.Args[1]

	tcpAddr, err := net.ResolveTCPAddr("tcp4", service)
	checkError(err)

	conn, err := net.DialTCP("tcp", nil, tcpAddr)
	checkError(err)

	_, err = conn.Write([]byte("HEAD / HTTP/1.0\r\n\r\n"))
	checkError(err)

	//result, err := readFully(conn)
	result, err := ioutil.ReadAll(conn)
	checkError(err)

	fmt.Println(string(result))

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

```

### hello.go

```go
package main

import "fmt"

func main() {
	fmt.Printf("hello, world\n")
}

```

### IP.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s ip-addr\n", os.Args[0])
		os.Exit(1)
	}
	name := os.Args[1]

	addr := net.ParseIP(name)
	if addr == nil {
		fmt.Println("Invalid address")
	} else {
		fmt.Println("The address is ", addr.String())
	}
	os.Exit(0)
}

```

### IPDaytimeClient.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("udp", service)
	checkError(err)

	_, err = conn.Write([]byte("anything"))
	checkError(err)

	var buf [512]byte
	n, err := conn.Read(buf[0:])
	checkError(err)

	fmt.Println(string(buf[0:n]))

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### IPGetHeadInfo.go

```go

package main

import (
	"bytes"
	"fmt"
	"io"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s host:port", os.Args[0])
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError(err)

	_, err = conn.Write([]byte("HEAD / HTTP/1.0\r\n\r\n"))
	checkError(err)

	result, err := readFully(conn)
	//result, err := io.readAll(conn)
	checkError(err)

	fmt.Println(string(result))

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

func readFully(conn net.Conn) ([]byte, error) {
	defer conn.Close()

	result := bytes.NewBuffer(nil)
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		result.Write(buf[0:n])
		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, err
		}
	}
	return result.Bytes(), nil
}

```

### IPv4Mask.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s dotted-ip-addr\n", os.Args[0])
		os.Exit(1)
	}
	dotAddr := os.Args[1]

	addr := net.ParseIP(dotAddr)
	if addr == nil {
		fmt.Println("Invalid address")
		os.Exit(1)
	}
	mask := addr.DefaultMask()
	network := addr.Mask(mask)
	ones, bits := mask.Size()
	fmt.Println("Address is ", addr.String(),
		"\nDefault mask length is ", bits,
		"\nLeading ones count is ", ones,
		"\nMask is (hex) ", mask.String(),
		"\nNetwork is ", network.String())
	os.Exit(0)
}

```

### LookupHost.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s hostname\n", os.Args[0])
		os.Exit(1)
	}
	name := os.Args[1]

	addrs, err := net.LookupHost(name)
	if err != nil {
		fmt.Println("Error: ", err.Error())
		os.Exit(2)
	}

	for _, s := range addrs {
		fmt.Println(s)
	}
	os.Exit(0)
}

```

### LookupPort.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 3 {
		fmt.Fprintf(os.Stderr,
			"Usage: %s network-type service\n",
			os.Args[0])
		os.Exit(1)
	}
	networkType := os.Args[1]
	service := os.Args[2]

	port, err := net.LookupPort(networkType, service)
	if err != nil {
		fmt.Println("Error: ", err.Error())
		os.Exit(2)
	}

	fmt.Println("Service port ", port)
	os.Exit(0)
}

```

### Mask.go

```go

package main

import (
	"fmt"
	"net"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) != 4 {
		fmt.Fprintf(os.Stderr, "Usage: %s dotted-ip-addr ones bits\n", os.Args[0])
		os.Exit(1)
	}
	dotAddr := os.Args[1]
	ones, _ := strconv.Atoi(os.Args[2])
	bits, _ := strconv.Atoi(os.Args[3])

	addr := net.ParseIP(dotAddr)
	if addr == nil {
		fmt.Println("Invalid address")
		os.Exit(1)
	}
	mask := net.CIDRMask(ones, bits)
	network := addr.Mask(mask)
	fmt.Println("Address is ", addr.String(),
		"\nMask length is ", bits,
		"\nLeading ones count is ", ones,
		"\nMask is (hex) ", mask.String(),
		"\nNetwork is ", network.String())
	os.Exit(0)
}

```

### Ping.go

```go

package main

import (
	"bytes"
	"fmt"
	"io"
	"net"
	"os"
)

const myIPAddress = "192.168.1.2"
const ipv4HeaderSize = 20

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host")
		os.Exit(1)
	}

	localAddr, err := net.ResolveIPAddr("ip4", myIPAddress)
	if err != nil {
		fmt.Println("Resolution error", err.Error())
		os.Exit(1)
	}

	remoteAddr, err := net.ResolveIPAddr("ip4", os.Args[1])
	if err != nil {
		fmt.Println("Resolution error", err.Error())
		os.Exit(1)
	}

	conn, err := net.DialIP("ip4:icmp", localAddr, remoteAddr)
	checkError(err)

	var msg [512]byte
	msg[0] = 8  // echo
	msg[1] = 0  // code 0
	msg[2] = 0  // checksum, fix later
	msg[3] = 0  // checksum, fix later
	msg[4] = 0  // identifier[0]
	msg[5] = 13 //identifier[1] (arbitrary)
	msg[6] = 0  // sequence[0]
	msg[7] = 37 // sequence[1] (arbitrary)
	len := 8

	// now fix checksum bytes
	check := checkSum(msg[0:len])
	msg[2] = byte(check >> 8)
	msg[3] = byte(check & 255)

	// send the messge
	_, err = conn.Write(msg[0:len])
	checkError(err)

	fmt.Print("Message sent:    ")
	for n := 0; n < 8; n++ {
		fmt.Print(" ", msg[n])
	}
	fmt.Println()

	// receive a reply
	size, err2 := conn.Read(msg[0:])
	checkError(err2)

	fmt.Print("Message received:")
	for n := ipv4HeaderSize; n < size; n++ {
		fmt.Print(" ", msg[n])
	}
	fmt.Println()
	os.Exit(0)
}

func checkSum(msg []byte) uint16 {
	sum := 0

	// assume even for now
	for n := 0; n < len(msg); n += 2 {
		sum += int(msg[n])*256 + int(msg[n+1])
	}
	sum = (sum >> 16) + (sum & 0xffff)
	sum += (sum >> 16)
	var answer uint16 = uint16(^sum)
	return answer
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

func readFully(conn net.Conn) ([]byte, error) {
	defer conn.Close()

	result := bytes.NewBuffer(nil)
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		result.Write(buf[0:n])
		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, err
		}
	}
	return result.Bytes(), nil
}

```

### ResolveIP.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s hostname\n", os.Args[0])
		fmt.Println("Usage: ", os.Args[0], "hostname")
		os.Exit(1)
	}
	name := os.Args[1]

	addr, err := net.ResolveIPAddr("ip", name)
	if err != nil {
		fmt.Println("Resolution error", err.Error())
		os.Exit(1)
	}
	fmt.Println("Resolved address is ", addr.String())
	os.Exit(0)
}

```

### SimpleEchoServer.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {

	service := ":1201"
	tcpAddr, err := net.ResolveTCPAddr("tcp4", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}
		handleClient(conn)
		conn.Close() // we're finished
	}
}

func handleClient(conn net.Conn) {
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		if err != nil {
			return
		}
		fmt.Println(string(buf[0:]))
		_, err2 := conn.Write(buf[0:n])
		if err2 != nil {
			return
		}
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

```

### ThreadedEchoServer.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {

	service := ":1201"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}
		// run as a goroutine
		go handleClient(conn)
	}
}

func handleClient(conn net.Conn) {
	// close connection on exit
	defer conn.Close()

	var buf [512]byte
	for {
		// read upto 512 bytes
		n, err := conn.Read(buf[0:])
		if err != nil {
			return
		}

		// write the n bytes read
		_, err2 := conn.Write(buf[0:n])
		if err2 != nil {
			return
		}
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

```

### ThreadedIPEchoServer.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {

	service := ":1200"
	listener, err := net.Listen("tcp", service)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}
		go handleClient(conn)
	}
}

func handleClient(conn net.Conn) {
	defer conn.Close()

	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		if err != nil {
			return
		}
		_, err2 := conn.Write(buf[0:n])
		if err2 != nil {
			return
		}
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

```

### UDPDaytimeClient.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s host:port", os.Args[0])
		os.Exit(1)
	}
	service := os.Args[1]

	udpAddr, err := net.ResolveUDPAddr("udp", service)
	checkError(err)

	conn, err := net.DialUDP("udp", nil, udpAddr)
	checkError(err)

	_, err = conn.Write([]byte("anything"))
	checkError(err)

	var buf [512]byte
	n, err := conn.Read(buf[0:])
	checkError(err)

	fmt.Println(string(buf[0:n]))

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### UDPDaytimeServer.go

```go

package main

import (
	"fmt"
	"net"
	"os"
	"time"
)

func main() {

	service := ":1200"
	udpAddr, err := net.ResolveUDPAddr("udp", service)
	checkError(err)

	conn, err := net.ListenUDP("udp", udpAddr)
	checkError(err)

	for {
		handleClient(conn)
	}
}

func handleClient(conn *net.UDPConn) {

	var buf [512]byte

	_, addr, err := conn.ReadFromUDP(buf[0:])
	if err != nil {
		return
	}

	daytime := time.Now().String()

	conn.WriteToUDP([]byte(daytime), addr)
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### UDPEchoClient.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	udpAddr, err := net.ResolveUDPAddr(service)
	checkError(err)

	conn, err := net.DialUDP("udp", nil, udpAddr)
	checkError(err)

	_, err = conn.Write([]byte("anything"))
	checkError(err)

	var buf [512]byte
	n, err := conn.Read(buf[0:])
	checkError(err)

	fmt.Println(string(buf[0:n]))

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### UDPEchoServer.go

```go

package main

import (
	"fmt"
	"net"
	"os"
	"time"
)

func main() {

	service := "0.0.0.0:1200"
	udpAddr, err := net.ResolveUDPAddr("up4", service)
	checkError(err)

	conn, err := net.ListenUDP("udp", udpAddr)
	checkError(err)

	for {
		handleClient(conn)
	}
}

func handleClient(conn *net.UDPConn) {

	var buf [512]byte

	n, addr, err := conn.ReadFromUDP(buf[0:])
	if err != nil {
		return
	}
	fmt.Println(string(buf[0:n]))

	daytime := time.Now().String()
	fmt.Println(daytime)

	conn.WriteToUDP([]byte(daytime), addr)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 4. Data Serialization

### ASN1.go

```go

package main

import (
	"encoding/asn1"
	"fmt"
	"os"
)

func main() {
	val := 13
	fmt.Println("Before marshal/unmarshal: ", val)
	mdata, err := asn1.Marshal(val)
	checkError(err)

	var n int
	_, err1 := asn1.Unmarshal(mdata, &n)
	checkError(err1)

	fmt.Println("After marshal/unmarshal: ", n)
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

```

### ASN1basic.go

```go

package main

import (
	"encoding/asn1"
	"fmt"
	"os"
	"time"
)

func main() {

	t := time.Now()
	fmt.Println("Before marshalling: ", t.String())

	mdata, err := asn1.Marshal(t)
	checkError(err)
	fmt.Println("Marshalled ok")

	var newtime = new(time.Time)
	_, err1 := asn1.Unmarshal(mdata, newtime)
	checkError(err1)

	fmt.Println("After marshal/unmarshal: ", newtime.String())

	s := "hello \u00bc"
	fmt.Println("Before marshalling: ", s)

	mdata2, err := asn1.Marshal(s)
	checkError(err)
	fmt.Println("Marshalled ok")

	var newstr string
	_, err2 := asn1.Unmarshal(mdata2, &newstr)
	checkError(err2)

	fmt.Println("After marshal/unmarshal: ", newstr)

}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ASN1edge.go

```go

}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

/*
func getType(t reflect.Type) string {
        switch t := t.(type) {
        case *reflect.BoolType:
                return "Boolean"
        case *reflect.IntType:
                return "Integer"
        case *reflect.StructType:
                return "Sequence"
        case *reflect.SliceType:
                if t.Elem().Kind() == reflect.Uint8 {
                        return "OctetString"
                }
                if strings.HasSuffix(t.Name(), "SET") {
                        return "Set"
                }
                return "Sequence"
        case *reflect.StringType:
                return "PrintableString"
	case *reflect.PtrType:
		return "Pointer"
	}

        return "error type"
}
*/

/*
func getUniversalType(t reflect.Type) (tagNumber int, isCompound, ok bool) {
        switch t {
        case reflect.objectIdentifierType:
                return tagOID, false, true
        case bitStringType:
                return tagBitString, false, true
        case timeType:
                return tagUTCTime, false, true
        case enumeratedType:
                return tagEnum, false, true
        }
        switch t := t.(type) {
        case *reflect.BoolType:
                return tagBoolean, false, true
        case *reflect.IntType:
                return tagInteger, false, true
        case *reflect.StructType:
                return tagSequence, true, true
        case *reflect.SliceType:
                if t.Elem().Kind() == reflect.Uint8 {
                        return tagOctetString, false, true
                }
                if strings.HasSuffix(t.Name(), "SET") {
                        return tagSet, true, true
                }
                return tagSequence, true, true
        case *reflect.StringType:
                return tagPrintableString, false, true
        }
        return 0, false, false
}
*/

```

### ASN1time.go

```go

package main

import (
	"encoding/asn1"
	"fmt"
	"os"
	"time"
)

// import "/.myTypes"

type MyInt int

func main() {
	t := time.Now()
	fmt.Println("Before marshalling: ", t.String())

	mdata, err := asn1.MarshalToMemory(t)
	checkError(err)

	var newtime time.Time
	_, err1 := asn1.Unmarshal(&newtime, mdata)
	checkError(err1)

	fmt.Println("After marshal/unmarshal: ", newtime.String())
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ASNDaytimeClient.go

```go

package main

import (
	"bytes"
	"encoding/asn1"
	"fmt"
	"io"
	"net"
	"os"
	"time"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s host:port", os.Args[0])
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError(err)

	result, err := readFully(conn)
	checkError(err)

	var newtime time.Time
	_, err1 := asn1.Unmarshal(result, &newtime)
	checkError(err1)

	fmt.Println("After marshal/unmarshal: ", newtime.String())

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

func readFully(conn net.Conn) ([]byte, error) {
	defer conn.Close()

	result := bytes.NewBuffer(nil)
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		result.Write(buf[0:n])
		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, err
		}
	}
	return result.Bytes(), nil
}

```

### ASNDaytimeServer.go

```go

package main

import (
	"encoding/asn1"
	"fmt"
	"net"
	"os"
	"time"
)

func main() {

	service := ":1200"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		daytime := time.Now()
		// Ignore return network errors.
		mdata, _ := asn1.Marshal(daytime)
		conn.Write(mdata)
		conn.Close() // we're finished
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
		os.Exit(1)
	}
}

```

### ASNEchoClient.go

```go

package main

import (
	"bytes"
	"encoding/asn1"
	"fmt"
	"io"
	"net"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan@newmarch.name"},
			Email{Kind: "work", Address: "j.newmarch@boxhill.edu.au"}}}

	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError(err)

	result, err := readFully(conn)
	checkError(err)

	var newtime time.Time
	_, err1 := asn1.Unmarshal(&newtime, result)
	checkError(err1)

	fmt.Println("After marshal/unmarshal: ", newtime.String())

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

func readFully(conn net.Conn) ([]byte, error) {
	defer conn.Close()

	var result []byte
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		result = bytes.Add(result, buf[0:n])
		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, err
		}
	}
	return result, nil
}

```

### ASNEchoServer.go

```go

package main

import (
	"encoding/asn1"
	"fmt"
	"net"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func main() {

	service := "0.0.0.0:1200"
	tcpAddr, err := net.ResolveTCPAddr(service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		daytime := time.Now()
		// Dereference the pointer from LocalTime.
		// Ignore return network errors.
		asn1.Marshal(conn, *daytime)
		conn.Close() // we're finished
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### Base64.go

```go

package main

import (
	"encoding/base64"
	"fmt"
)

func main() {

	eightBitData := []byte{1, 2, 3, 4, 5, 6, 7, 8}

	enc := base64.StdEncoding.EncodeToString(eightBitData)
	dec, _ := base64.StdEncoding.DecodeString(enc)

	fmt.Println("Original data ", eightBitData)
	fmt.Println("Encoded string ", enc)
	fmt.Println("Decoded data ", dec)
}

```

### DaytimeServer.go

```go

package main

import (
	"encoding/asn1"
	"fmt"
	"net"
	"os"
	"time"
)

func main() {

	service := "0.0.0.0:1200"
	tcpAddr, err := net.ResolveTCPAddr(service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		daytime := time.Now()
		asn1.Marshal(conn, daytime)
		conn.Close() // we're finished
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### GobEchoClient.go

```go

package main

import (
	"bytes"
	"encoding/gob"
	"fmt"
	"io"
	"net"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func (p Person) String() string {
	s := p.Name.Personal + " " + p.Name.Family
	for _, v := range p.Email {
		s += "\n" + v.Kind + ": " + v.Address
	}
	return s
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan@newmarch.name"},
			Email{Kind: "work", Address: "j.newmarch@boxhill.edu.au"}}}

	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError(err)

	encoder := gob.NewEncoder(conn)
	decoder := gob.NewDecoder(conn)

	for n := 0; n < 10; n++ {
		encoder.Encode(person)
		var newPerson Person
		decoder.Decode(&newPerson)
		fmt.Println(newPerson.String())
	}

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

func readFully(conn net.Conn) ([]byte, error) {
	defer conn.Close()

	result := bytes.NewBuffer(nil)
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		result.Write(buf[0:n])
		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, err
		}
	}
	return result.Bytes(), nil
}

```

### GobEchoServer.go

```go

package main

import (
	"encoding/gob"
	"fmt"
	"net"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func (p Person) String() string {
	s := p.Name.Personal + " " + p.Name.Family
	for _, v := range p.Email {
		s += "\n" + v.Kind + ": " + v.Address
	}
	return s
}

func main() {

	service := "0.0.0.0:1200"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		encoder := gob.NewEncoder(conn)
		decoder := gob.NewDecoder(conn)

		for n := 0; n < 10; n++ {
			var person Person
			decoder.Decode(&person)
			fmt.Println(person.String())
			encoder.Encode(person)
		}
		conn.Close() // we're finished
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### IPDaytimeClient.go

```go

package main

import (
	"bytes"
	"encoding/asn1"
	"fmt"
	"io"
	"net"
	"os"
	"time"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError(err)

	result, err := readFully(conn)
	checkError(err)

	var newtime = new(time.Time)
	_, err1 := asn1.Unmarshal(&newtime, result)
	checkError(err1)

	fmt.Println("After marshal/unmarshal: ", newtime.String())

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

func readFully(conn net.Conn) ([]byte, error) {
	defer conn.Close()

	var result []byte
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		result = bytes.Add(result, buf[0:n])
		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, err
		}
	}
	return result, nil
}

```

### JSON.go

```go

package main

import (
	"encoding/json"
	"fmt"
	"os"
)

func main() {
	mdata, err := json.Marshal(13)
	checkError(err)

	var n []uint8
	err = json.Unmarshal(n, mdata)
	checkError(err)

	fmt.Println("After marshal/unmarshal: ", n)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### JSONEchoClient.go

```go

package main

import (
	"bytes"
	"encoding/json"
	"fmt"
	"io"
	"net"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func (p Person) String() string {
	s := p.Name.Personal + " " + p.Name.Family
	for _, v := range p.Email {
		s += "\n" + v.Kind + ": " + v.Address
	}
	return s
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan@newmarch.name"},
			Email{Kind: "work", Address: "j.newmarch@boxhill.edu.au"}}}

	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError(err)

	encoder := json.NewEncoder(conn)
	decoder := json.NewDecoder(conn)

	for n := 0; n < 10; n++ {
		encoder.Encode(person)
		var newPerson Person
		decoder.Decode(&newPerson)
		fmt.Println(newPerson.String())
	}

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

func readFully(conn net.Conn) ([]byte, error) {
	defer conn.Close()

	result := bytes.NewBuffer(nil)
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		result.Write(buf[0:n])
		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, err
		}
	}
	return result.Bytes(), nil
}

```

### JSONEchoServer.go

```go

package main

import (
	"encoding/json"
	"fmt"
	"net"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func (p Person) String() string {
	s := p.Name.Personal + " " + p.Name.Family
	for _, v := range p.Email {
		s += "\n" + v.Kind + ": " + v.Address
	}
	return s
}

func main() {

	service := "0.0.0.0:1200"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		encoder := json.NewEncoder(conn)
		decoder := json.NewDecoder(conn)

		for n := 0; n < 10; n++ {
			var person Person
			decoder.Decode(&person)
			fmt.Println(person.String())
			encoder.Encode(person)
		}
		conn.Close() // we're finished
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LoadGob.go

```go

package main

import (
	"encoding/gob"
	"fmt"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func (p Person) String() string {
	s := p.Name.Personal + " " + p.Name.Family
	for _, v := range p.Email {
		s += "\n" + v.Kind + ": " + v.Address
	}
	return s
}
func main() {
	var person Person
	loadGob("person.gob", &person)

	fmt.Println("Person", person.String())
}

func loadGob(fileName string, key interface{}) {
	inFile, err := os.Open(fileName)
	checkError(err)
	decoder := gob.NewDecoder(inFile)
	err = decoder.Decode(key)
	checkError(err)
	inFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LoadJSON.go

```go

package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func (p Person) String() string {
	s := p.Name.Personal + " " + p.Name.Family
	for _, v := range p.Email {
		s += "\n" + v.Kind + ": " + v.Address
	}
	return s
}
func main() {
	var person Person
	loadJSON("person.json", &person)

	fmt.Println("Person", person.String())
}

func loadJSON(fileName string, key interface{}) {
	inFile, err := os.Open(fileName)
	checkError(err)
	decoder := json.NewDecoder(inFile)
	err = decoder.Decode(key)
	checkError(err)
	inFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### myTypes.go

```go
package myTypes

type MyInt int

type MyTime struct {
	Year                 int64  // 2006 is 2006
	Month, Day           int    // Jan-2 is 1, 2
	Hour, Minute, Second int    // 15:04:05 is 15, 4, 5.
	Weekday              int    // Sunday, Monday, ...
	ZoneOffset           int    // seconds east of UTC, e.g. -7*60 for -0700
	Zone                 string // e.g., "MST"
}

```

### ProtocolBuffer.go

```go

package main

import (
	"fmt"
	"github.com/golang/protobuf/proto"
	"os"
	"person"
)

func main() {
	name := person.Person_Name{
		Family:   "newmarch",
		Personal: "jan"}

	email1 := person.Person_Email{
		Kind:    "home",
		Address: "jan@newmarch.name"}
	email2 := person.Person_Email{
		Kind:    "work",
		Address: "j.newmarch@boxhill.edu.au"}

	emails := []*person.Person_Email{&email1, &email2}
	p := person.Person{
		Name:  &name,
		Email: emails,
	}
	fmt.Println(p)

	data, err := proto.Marshal(&p)
	checkError(err)
	newP := person.Person{}
	err = proto.Unmarshal(data, &newP)
	checkError(err)
	fmt.Println(newP)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### SaveGob.go

```go

package main

import (
	"encoding/gob"
	"fmt"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan@newmarch.name"},
			Email{Kind: "work", Address: "j.newmarch@boxhill.edu.au"}}}

	saveGob("person.gob", person)
}

func saveGob(fileName string, key interface{}) {
	outFile, err := os.Create(fileName)
	checkError(err)
	encoder := gob.NewEncoder(outFile)
	err = encoder.Encode(key)
	checkError(err)
	outFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### SaveJSON.go

```go

package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string
	Address string
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan@newmarch.name"},
			Email{Kind: "work", Address: "j.newmarch@boxhill.edu.au"}}}

	saveJSON("person.json", person)
}

func saveJSON(fileName string, key interface{}) {
	outFile, err := os.Create(fileName)
	checkError(err)
	encoder := json.NewEncoder(outFile)
	err = encoder.Encode(key)
	checkError(err)
	outFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 5. Application-Level Protocols

### FTPClient.go

```go

package main

import (
	"bufio"
	"bytes"
	"fmt"
	"net"
	"os"
	"strings"
)

// strings used by the user interface
const (
	uiDir  = "dir"
	uiCd   = "cd"
	uiPwd  = "pwd"
	uiQuit = "quit"
)

// strings used across the network
const (
	DIR = "DIR"
	CD  = "CD"
	PWD = "PWD"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host")
		os.Exit(1)
	}

	host := os.Args[1]

	conn, err := net.Dial("tcp", host+":1202")
	checkError(err)

	reader := bufio.NewReader(os.Stdin)
	for {
		line, err := reader.ReadString('\n')
		// lose trailing whitespace
		line = strings.TrimRight(line, " \t\r\n")
		if err != nil {
			break
		}

		// split into command + arg
		strs := strings.SplitN(line, " ", 2)
		// decode user request
		switch strs[0] {
		case uiDir:
			dirRequest(conn)
		case uiCd:
			if len(strs) != 2 {
				fmt.Println("cd <dir>")
				continue
			}
			fmt.Println("CD \"", strs[1], "\"")
			cdRequest(conn, strs[1])
		case uiPwd:
			pwdRequest(conn)
		case uiQuit:
			conn.Close()
			os.Exit(0)
		default:
			fmt.Println("Unknown command")
		}
	}
}

func dirRequest(conn net.Conn) {
	conn.Write([]byte(DIR + " "))

	var buf [512]byte
	result := bytes.NewBuffer(nil)
	for {
		// read till we hit a blank line
		n, _ := conn.Read(buf[0:])
		result.Write(buf[0:n])
		length := result.Len()
		contents := result.Bytes()
		if string(contents[length-4:]) == "\r\n\r\n" {
			fmt.Println(string(contents[0 : length-4]))
			return
		}
	}
}

func cdRequest(conn net.Conn, dir string) {
	conn.Write([]byte(CD + " " + dir))
	var response [512]byte
	n, _ := conn.Read(response[0:])
	s := string(response[0:n])
	if s != "OK" {
		fmt.Println("Failed to change dir")
	}
}

func pwdRequest(conn net.Conn) {
	conn.Write([]byte(PWD))
	var response [512]byte
	n, _ := conn.Read(response[0:])
	s := string(response[0:n])
	fmt.Println("Current dir \"" + s + "\"")
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### FTPServer.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

const (
	DIR = "DIR"
	CD  = "CD"
	PWD = "PWD"
)

func main() {

	service := "0.0.0.0:1202"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}
		go handleClient(conn)
	}
}

func handleClient(conn net.Conn) {
	defer conn.Close()

	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		if err != nil {
			conn.Close()
			return
		}

		s := string(buf[0:n])
		// decode request
		if s[0:2] == CD {
			chdir(conn, s[3:])
		} else if s[0:3] == DIR {
			dirList(conn)
		} else if s[0:3] == PWD {
			pwd(conn)
		}

	}
}

func chdir(conn net.Conn, s string) {
	if os.Chdir(s) == nil {
		conn.Write([]byte("OK"))
	} else {
		conn.Write([]byte("ERROR"))
	}
}

func pwd(conn net.Conn) {
	s, err := os.Getwd()
	if err != nil {
		conn.Write([]byte(""))
		return
	}
	conn.Write([]byte(s))
}

func dirList(conn net.Conn) {
	// send a blank line on termination
	defer conn.Write([]byte("\r\n"))

	dir, err := os.Open(".")
	if err != nil {
		return
	}

	names, err := dir.Readdirnames(-1)
	if err != nil {
		return
	}
	for _, nm := range names {
		conn.Write([]byte(nm + "\r\n"))
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### test.go

```go
package main

func main() {
	var n int
}

```

## 6. Managing Character Sets and Encodings

### ISO8859.go

```go

package main

import "fmt"

var charmap = [256]int{0, 1, 2, 3, 4, 5}

var isoToUnicodeMap = map[uint8]int{
	0xc7: 0x12e,
	0xc8: 0x10c,
	0xca: 0x118,
}

var unicodeToISOMap = map[int]uint8{
	0x12e: 0xc7,
	0x10c: 0xc8,
	0x118: 0xca,
}

func main() {
	// str := "ĮČĘ"
	str := "\u012e\u010c\u0118"
	fmt.Println(str)

	bytes := unicodeStrToISO(str)

	// bytes is now the ISO 8859-1 encoding of the str
	for _, v := range bytes {
		fmt.Printf("  %x", v)
	}
	fmt.Println()

	// now turn it back into a UTF-8 string

	newStr := isoBytesToUnicode(bytes)
	fmt.Println(newStr)
}

/* Turn a UTF-8 string into an ISO 8859 encoded byte array
 */
func unicodeStrToISO(str string) []byte {
	codePoints := []int(str)
	// coedPoints contains unicode code points
	bytes := make([]byte, len(codePoints))
	for n, v := range codePoints {
		iso, ok := unicodeToISOMap[v]
		if !ok {
			iso = uint8(v)
		}
		bytes[n] = iso
	}
	return bytes
}

func isoBytesToUnicode(bytes []byte) string {
	newInts := make([]int, len(bytes))
	for n, v := range bytes {
		unicode, ok := isoToUnicodeMap[v]
		if !ok {
			unicode = int(v)
		}
		newInts[n] = unicode
	}
	newStr := string(newInts)
	return newStr
}

```

### norm.go

```go
package main

import (
	"fmt"
	"golang.org/x/text/unicode/norm"
)

func main() {
	str1 := "\u04d6"
	str2 := "\u0415\u0306"
	norm_str2 := norm.NFC.String(str2)
	bytes1 := []byte(str1)
	bytes2 := []byte(str2)
	norm_bytes2 := []byte(norm_str2)

	fmt.Println("Single char ", str1, " bytes ", bytes1)
	fmt.Println("Composed char ", str2, " bytes ", bytes2)
	fmt.Println("Normalised char", norm_str2, " bytes ", norm_bytes2)
	//fmt.Println(str1, bytes1, str2, bytes2)
}

```

### StrLength.go

```go

package main

import "fmt"

func main() {
	str := "百度一下，你就知道"

	fmt.Println("String length", len([]rune(str)))
	fmt.Println("Byte length", len(str))

	bytes := []byte(str)
	str2 := string(bytes[0 : len(bytes)-4])
	fmt.Println(len(str2), len([]rune(str2)))
	fmt.Println("\"" + str2 + "\"")

	for n, v := range []byte(str2) {
		fmt.Print(" (", n, " ", v, ")")
	}
	fmt.Println()
	for n, v := range str2 {
		fmt.Print(" (", n, " ", v, ")")
	}
	fmt.Println()
	for n, v := range []rune(str2) {
		fmt.Print(" (", n, " ", v, ")")
	}
	fmt.Println()

	str = "hello"
	fmt.Println("Hello String length", len([]rune(str)))
	fmt.Println("Hello Byte length", len(str))

}

```

### UTF16.go

```go

package main

import (
	"fmt"
	"unicode/utf16"
)

func main() {
	str := "百度一下，你就知道"

	runess := utf16.Encode([]rune(str))
	ints := utf16.Decode(runes)
	fmt.Println(string(ints))

}

```

### UTF16Client.go

```go

package main

import (
	"fmt"
	"net"
	"os"
	"unicode/utf16"
)

const BOM = '\ufffe'

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := net.Dial("tcp", service)
	checkError(err)

	shorts := readShorts(conn)
	ints := utf16.Decode(shorts)
	str := string(ints)

	fmt.Println(str)

	os.Exit(0)
}

func readShorts(conn net.Conn) []uint16 {
	var buf [512]byte

	// read everything into the buffer
	n, err := conn.Read(buf[0:2])
	for true {
		m, err := conn.Read(buf[n:])
		if m == 0 || err != nil {
			break
		}
		n += m
	}

	checkError(err)
	var shorts []uint16
	shorts = make([]uint16, n/2)

	if buf[0] == 0xff && buf[1] == 0xfe {
		// big endian
		for i := 2; i < n; i += 2 {
			shorts[i/2] = uint16(buf[i])<<8 + uint16(buf[i+1])
		}
	} else if buf[1] == 0xff && buf[0] == 0xfe {
		// little endian
		for i := 2; i < n; i += 2 {
			shorts[i/2] = uint16(buf[i+1])<<8 + uint16(buf[i])
		}
	} else {
		// unknown byte order
		fmt.Println("Unknown order")
	}
	return shorts

}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### UTF16Server.go

```go

package main

import (
	"fmt"
	"net"
	"os"
	"unicode/utf16"
)

const BOM = '\ufffe'

func main() {

	service := "0.0.0.0:1210"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		str := "j'ai arrêté"
		shorts := utf16.Encode([]rune(str))
		writeShorts(conn, shorts)

		conn.Close() // we're finished
	}
}

func writeShorts(conn net.Conn, shorts []uint16) {
	var bytes [2]byte

	// send the BOM as first two bytes
	bytes[0] = BOM >> 8
	bytes[1] = BOM & 255
	_, err := conn.Write(bytes[0:])
	if err != nil {
		return
	}

	for _, v := range shorts {
		bytes[0] = byte(v >> 8)
		bytes[1] = byte(v & 255)

		_, err = conn.Write(bytes[0:])
		if err != nil {
			return
		}
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### UTF8Server.go

```go

package main

import (
	"fmt"
	"net"
	"os"
)

func main() {

	service := "0.0.0.0:1200"
	tcpAddr, err := net.ResolveTCPAddr("tcp", service)
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}

		str := "百度一下，你就知道"
		conn.Write([]byte(str)) // don't care about return value
		conn.Close()            // we're finished
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 7. Security

### Aes.go

```go

package main

import (
	"bytes"
	"crypto/aes"
	"fmt"
)

func main() {
	key := []byte("my key, len 16 b")
	cipher, err := aes.NewCipher(key)
	if err != nil {
		fmt.Println(err.Error())
	}
	src := []byte("hello 16 b block")

	var enc [16]byte
	cipher.Encrypt(enc[0:], src)

	var decrypt [16]byte
	cipher.Decrypt(decrypt[0:], enc[0:])
	result := bytes.NewBuffer(nil)
	result.Write(decrypt[0:])
	fmt.Println(string(result.Bytes()))
}

```

### Blowfish.go

```go

package main

import (
	"bytes"
	"code.google.com/p/go.crypto/blowfish"
	"fmt"
)

func main() {
	key := []byte("my key")
	cipher, err := blowfish.NewCipher(key)
	if err != nil {
		fmt.Println(err.Error())
	}
	src := []byte("hello\n\n\n")
	var enc [512]byte

	cipher.Encrypt(enc[0:], src)

	var decrypt [8]byte
	cipher.Decrypt(decrypt[0:], enc[0:])
	result := bytes.NewBuffer(nil)
	result.Write(decrypt[0:8])
	fmt.Println(string(result.Bytes()))
}

```

### GenRSAKeys.go

```go

package main

import (
	"crypto/rand"
	"crypto/rsa"
	"crypto/x509"
	"encoding/gob"
	"encoding/pem"
	"fmt"
	"os"
)

func main() {
	reader := rand.Reader
	bitSize := 2048
	key, err := rsa.GenerateKey(reader, bitSize)
	checkError(err)

	fmt.Println("Private key primes", key.Primes[0].String(), key.Primes[1].String())
	fmt.Println("Private key exponent", key.D.String())

	publicKey := key.PublicKey
	fmt.Println("Public key modulus", publicKey.N.String())
	fmt.Println("Public key exponent", publicKey.E)

	saveGobKey("private.key", key)
	saveGobKey("public.key", publicKey)

	savePEMKey("private.pem", key)
}

func saveGobKey(fileName string, key interface{}) {
	outFile, err := os.Create(fileName)
	checkError(err)
	encoder := gob.NewEncoder(outFile)
	err = encoder.Encode(key)
	checkError(err)
	outFile.Close()
}

func savePEMKey(fileName string, key *rsa.PrivateKey) {

	outFile, err := os.Create(fileName)
	checkError(err)

	var privateKey = &pem.Block{Type: "RSA PRIVATE KEY",
		Bytes: x509.MarshalPKCS1PrivateKey(key)}

	pem.Encode(outFile, privateKey)

	outFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### GenX509Cert.go

```go

package main

import (
	"crypto/rand"
	"crypto/rsa"
	"crypto/x509"
	"crypto/x509/pkix"
	"encoding/gob"
	"encoding/pem"
	"fmt"
	"math/big"
	"os"
	"time"
)

func main() {
	random := rand.Reader

	var key rsa.PrivateKey
	loadKey("private.key", &key)

	now := time.Now()
	then := now.Add(60 * 60 * 24 * 365 * 1000 * 1000 * 1000) // one year
	serialNumberLimit := new(big.Int).Lsh(big.NewInt(1), 128)
	serialNumber, err := rand.Int(rand.Reader, serialNumberLimit)
	template := x509.Certificate{
		SerialNumber: serialNumber,
		Subject: pkix.Name{
			CommonName:   "jan.newmarch.name",
			Organization: []string{"Jan Newmarch"},
		},
		//	NotBefore: time.Unix(now, 0).UTC(),
		//	NotAfter:  time.Unix(now+60*60*24*365, 0).UTC(),
		NotBefore: now,
		NotAfter:  then,

		SubjectKeyId: []byte{1, 2, 3, 4},
		KeyUsage:     x509.KeyUsageCertSign | x509.KeyUsageKeyEncipherment | x509.KeyUsageDigitalSignature,

		BasicConstraintsValid: true,
		IsCA:     true,
		DNSNames: []string{"jan.newmarch.name", "localhost"},
	}
	derBytes, err := x509.CreateCertificate(random, &template,
		&template, &key.PublicKey, &key)
	checkError(err)

	certCerFile, err := os.Create("jan.newmarch.name.cer")
	checkError(err)
	certCerFile.Write(derBytes)
	certCerFile.Close()

	certPEMFile, err := os.Create("jan.newmarch.name.pem")
	checkError(err)
	pem.Encode(certPEMFile, &pem.Block{Type: "CERTIFICATE", Bytes: derBytes})
	certPEMFile.Close()

	keyPEMFile, err := os.Create("private.pem")
	checkError(err)
	pem.Encode(keyPEMFile, &pem.Block{Type: "RSA PRIVATE KEY",
		Bytes: x509.MarshalPKCS1PrivateKey(&key)})
	keyPEMFile.Close()
}

func loadKey(fileName string, key interface{}) {
	inFile, err := os.Open(fileName)
	checkError(err)
	decoder := gob.NewDecoder(inFile)
	err = decoder.Decode(key)
	checkError(err)
	inFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LoadRSAKey.go

```go

package main

import (
	"crypto/rand"
	"crypto/rsa"
	"encoding/gob"
	"fmt"
	"os"
)

func main() {
	reader := rand.Reader
	bitSize := 128
	key, err := rsa.GenerateKey(reader, bitSize)
	checkError(err)

	fmt.Println("Private key primes", key.P, key.Q)
	fmt.Println("Private key exponent", key.D)

	publicKey := key.PublicKey
	fmt.Println("Public key modulus", publicKey.N)
	fmt.Println("Public key exponent", publicKey.E)

	saveKey("private.key", key)
	saveKey("public.key", key.PublicKey)
}

func saveKey(fileName string, key interface{}) {
	outFile, err := os.Create(fileName)
	checkError(err)
	encoder := gob.NewEncoder(outFile)
	err = encoder.Encode(key)
	checkError(err)
	outFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LoadRSAKeys.go

```go

package main

import (
	"crypto/rsa"
	"encoding/gob"
	"fmt"
	"os"
)

func main() {
	var key rsa.PrivateKey
	loadKey("private.key", &key)

	fmt.Println("Private key primes", key.Primes[0].String(), key.Primes[1].String())
	fmt.Println("Private key exponent", key.D.String())

	var publicKey rsa.PublicKey
	loadKey("public.key", &publicKey)

	fmt.Println("Public key modulus", publicKey.N.String())
	fmt.Println("Public key exponent", publicKey.E)
}

func loadKey(fileName string, key interface{}) {
	inFile, err := os.Open(fileName)
	checkError(err)
	decoder := gob.NewDecoder(inFile)
	err = decoder.Decode(key)
	checkError(err)
	inFile.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LoadX509Cert.go

```go

package main

import (
	"crypto/x509"
	"fmt"
	"os"
)

func main() {
	certCerFile, err := os.Open("jan.newmarch.name.cer")
	checkError(err)
	derBytes := make([]byte, 1000) // bigger than the file
	count, err := certCerFile.Read(derBytes)
	checkError(err)
	certCerFile.Close()

	// trim the bytes to actual length in call
	cert, err := x509.ParseCertificate(derBytes[0:count])
	checkError(err)

	fmt.Printf("Name %s\n", cert.Subject.CommonName)
	fmt.Printf("Not before %s\n", cert.NotBefore.String())
	fmt.Printf("Not after %s\n", cert.NotAfter.String())

}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### MD5Hash.go

```go

package main

import (
	"crypto/md5"
	"fmt"
)

func main() {
	hash := md5.New()
	bytes := []byte("hello\n")
	hash.Write(bytes)
	hashValue := hash.Sum(nil)
	hashSize := hash.Size()
	for n := 0; n < hashSize; n += 4 {
		var val uint32
		val = uint32(hashValue[n])<<24 +
			uint32(hashValue[n+1])<<16 +
			uint32(hashValue[n+2])<<8 +
			uint32(hashValue[n+3])
		fmt.Printf("%x ", val)
	}
	fmt.Println()
}

```

### MD5HMAC.go

```go

package main

import (
	"crypto/md5"
	"crypto/hmac"
	"fmt"
)

func main() {
	hash := hmac.New(md5.New, []byte("secret"))w
	bytes := []byte("hello")
	hash.Write(bytes)
	hashValue := hash.Sum(nil)
	hashSize := hash.Size()
	for n := 0; n < hashSize; n += 4 {
		var val uint32
		val = uint32(hashValue[n])<<24 +
			uint32(hashValue[n+1])<<16 +
			uint32(hashValue[n+2])<<8 +
			uint32(hashValue[n+3])
		fmt.Printf("%x ", val)
	}
	fmt.Println()
}

```

### TLSEchoClient.go

```go

package main

import (
	"crypto/tls"
	"crypto/x509"
	"fmt"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	// Load the PEM self-signed certificate
	certPemFile, err := os.Open("jan.newmarch.name.pem")
	checkError(err)
	pemBytes := make([]byte, 1000) // bigger than the file
	_, err = certPemFile.Read(pemBytes)
	checkError(err)
	certPemFile.Close()

	// Create a new certificate pool
	certPool := x509.NewCertPool()
	// and add our certificate
	ok := certPool.AppendCertsFromPEM(pemBytes)
	if !ok {
		fmt.Println("PEM read failed")
	} else {
		fmt.Println("PEM read ok")
	}

	// Dial, using a config with root cert set to ours
	conn, err := tls.Dial("tcp", service, &tls.Config{RootCAs: certPool})
	checkError(err)

	// Now write and read lots
	for n := 0; n < 10; n++ {
		fmt.Println("Writing...")
		conn.Write([]byte("Hello " + string(n+48)))

		var buf [512]byte
		n, err := conn.Read(buf[0:])
		checkError(err)

		fmt.Println(string(buf[0:n]))
	}
	conn.Close()
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### TLSEchoServer.go

```go

package main

import (
	"crypto/rand"
	"crypto/tls"
	"fmt"
	"net"
	"os"
	"time"
)

func main() {

	cert, err := tls.LoadX509KeyPair("jan.newmarch.name.pem", "private.pem")
	checkError(err)
	config := tls.Config{Certificates: []tls.Certificate{cert}}

	now := time.Now()
	config.Time = func() time.Time { return now }
	config.Rand = rand.Reader

	service := "0.0.0.0:1200"

	listener, err := tls.Listen("tcp", service, &config)
	checkError(err)
	fmt.Println("Listening")
	for {
		conn, err := listener.Accept()
		if err != nil {
			fmt.Println(err.Error())
			continue
		}
		fmt.Println("Accepted")
		go handleClient(conn)
	}
}

func handleClient(conn net.Conn) {
	defer conn.Close()

	var buf [512]byte
	for {
		fmt.Println("Trying to read")
		n, err := conn.Read(buf[0:])
		if err != nil {
			fmt.Println(err)
			return
		}
		_, err = conn.Write(buf[0:n])
		if err != nil {
			return
		}
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### TLSGetHead.go

```go

package main

import (
	"crypto/tls"
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := tls.Dial("tcp", service, nil)
	checkError(err)

	_, err = conn.Write([]byte("HEAD / HTTP/1.0\r\n\r\n"))
	checkError(err)

	result, err := ioutil.ReadAll(conn)
	checkError(err)

	fmt.Println(string(result))

	conn.Close()
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### tmp.go

```go

package main

import (
	"crypto/tls"
	"crypto/x509"
	"fmt"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	// Load the PEM self-signed certificate
	certPemFile, err := os.Open("jan.newmarch.name.pem")
	checkError(err)
	pemBytes := make([]byte, 1000) // bigger than the file
	_, err = certPemFile.Read(pemBytes)
	checkError(err)
	certPemFile.Close()

	// Create a new certificate pool
	certPool := x509.NewCertPool()
	// and add our certificate
	ok := certPool.AppendCertsFromPEM(pemBytes)
	if !ok {
		fmt.Println("PEM read failed")
	} else {
		fmt.Println("PEM read ok")
	}

	// Dial, using a config with root cert set to ours
	conn, err := tls.Dial("tcp", service, &tls.Config{RootCAs: certPool})
	checkError(err)

	// Now write and read lots
	for n := 0; n < 10; n++ {
		fmt.Println("Writing...")
		conn.Write([]byte("Hello " + string(n+48)))

		var buf [512]byte
		n, err := conn.Read(buf[0:])
		checkError(err)

		fmt.Println(string(buf[0:n]))
	}
	conn.Close()
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 8. HTTP

### ClientGet.go

```go

package main

import (
	"fmt"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
	"strings"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "http://host:port/page")
		os.Exit(1)
	}
	url, err := url.Parse(os.Args[1])
	checkError(err)

	client := &http.Client{}

	request, err := http.NewRequest("HEAD", url.String(), nil)

	// only accept UTF-8
	request.Header.Add("Accept-Charset", "utf-8;q=1, ISO-8859-1;q=0")
	checkError(err)

	response, err := client.Do(request)
	checkError(err)
	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	chSet := getCharset(response)
	if chSet != "utf-8" {
		fmt.Println("Cannot handle", chSet)
		os.Exit(4)
	}

	var buf [512]byte
	reader := response.Body
	fmt.Println("got body")
	for {
		n, err := reader.Read(buf[0:])
		if err != nil {
			os.Exit(0)
		}
		fmt.Print(string(buf[0:n]))
	}

	os.Exit(0)
}

func getCharset(response *http.Response) string {
	contentType := response.Header.Get("Content-Type")
	if contentType == "" {
		// guess
		return "utf-8"
	}
	idx := strings.Index(contentType, "charset=")
	if idx == -1 {
		// guess
		return "utf-8"
	}
	chSet := strings.Trim(contentType[idx+8:], " ")
	return strings.ToLower(chSet)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### FileServer.go

```go

package main

import (
	"fmt"
	"net/http"
	"os"
)

func main() {
	// deliver files from the directory /var/www
	fileServer := http.FileServer(http.Dir("/var/www"))

	// register the handler and deliver requests to it
	err := http.ListenAndServe(":8000", fileServer)
	checkError(err)
	// That's it!
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### Get.go

```go

package main

import (
	"fmt"
	"net/http"
	"net/http/httputil"
	"os"
	"strings"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	url := os.Args[1]

	response, err := http.Get(url)
	if err != nil {
		fmt.Println(err.Error())
		os.Exit(2)
	}

	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	contentTypes := response.Header["Content-Type"]
	if !acceptableCharset(contentTypes) {
		fmt.Println("Cannot handle", contentTypes)
		os.Exit(4)
	}

	fmt.Println("The response body is")
	var buf [512]byte
	reader := response.Body
	for {
		n, err := reader.Read(buf[0:])
		if err != nil {
			os.Exit(0)
		}
		fmt.Print(string(buf[0:n]))
	}
	os.Exit(0)
}

func acceptableCharset(contentTypes []string) bool {
	// each type is like [text/html; charset=utf-8]
	// we want the UTF-8 only
	for _, cType := range contentTypes {
		if strings.Index(cType, "utf-8") != -1 {
			return true
		}
	}
	return false
}

```

### Head.go

```go

package main

import (
	"fmt"
	"net/http"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "host:port")
		os.Exit(1)
	}
	url := os.Args[1]

	response, err := http.Head(url)
	if err != nil {
		fmt.Println(err.Error())
		os.Exit(2)
	}

	fmt.Println(response.Status)
	for k, v := range response.Header {
		fmt.Println(k+":", v)
	}

	os.Exit(0)
}

```

### HTTPSFileServer.go

```go

package main

import (
	"fmt"
	"net/http"
	"os"
)

func main() {
	// deliver files from the directory /var/www
	fileServer := http.FileServer(http.Dir("/var/www"))

	// register the handler and deliver requests to it
	err := http.ListenAndServeTLS(":8000", "jan.newmarch.name.pem",
		"private.pem", fileServer)
	//err := http.ListenAndServeTLS(":8000", "cert.pem",
	//	"key.pem", fileServer)
	checkError(err)
	// That's it!
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LowLevelGet.go

```go

package main

import (
	"fmt"
	"net"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
	"strings"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "http://host:port/page")
		os.Exit(1)
	}
	url, err := url.Parse(os.Args[1])
	checkError(err)

	// build a TCP connection to the proxy first
	host := url.Host
	conn, err := net.Dial("tcp", host)
	checkError(err)

	// then wrap an HTTP client connection around it
	clientConn := httputil.NewClientConn(conn, nil)
	if clientConn == nil {
		fmt.Println("Can't build connection")
		os.Exit(1)
	}

	// define the additional HTTP header fields
	//header := map[string] []string{"Accept-Charset": []string{"UTF-8;q=1", "ISO-8859-1;q=0"}}
	// and build the request
	//request := http.Request{Method: "GET", URL: url_, Proto: "HTTP/1.1", ProtoMajor: 1, ProtoMinor: 1} //, Header: header}
	request, err := http.NewRequest("GET", url.String(), nil)
	checkError(err)

	dump, _ := httputil.DumpRequest(request, false)
	fmt.Println(string(dump))

	// send the request
	err = clientConn.Write(request)
	checkError(err)

	// and get the response
	response, err := clientConn.Read(request)
	fmt.Println("Got response")
	checkError(err)

	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		os.Exit(2)
	}

	chSet := getCharset(response)
	fmt.Printf("got cahrset %s\n", chSet)
	if chSet != "UTF-8" {
		fmt.Println("Cannot handle", chSet)
		os.Exit(4)
	}

	var buf [512]byte
	reader := response.Body
	fmt.Println("got body")
	for {
		n, err := reader.Read(buf[0:])
		if err != nil {
			os.Exit(0)
		}
		fmt.Print(string(buf[0:n]))
	}

	os.Exit(0)
}

func getCharset(response *http.Response) string {
	contentType := response.Header.Get("Content-Type")
	if contentType == "" {
		// guess
		return "UTF-8"
	}
	idx := strings.Index(contentType, "charset:")
	if idx == -1 {
		// guess
		return "UTF-8"
	}
	return strings.Trim(contentType[idx:], " ")
}

func checkError(err error) {
	if err != nil {
		if err == httputil.ErrPersistEOF {
			// ignore
			return
		}

		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LowLevelMultipleGet.go

```go

package main

import (
	"fmt"
	"net"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "http://host:port/page")
		os.Exit(1)
	}
	url_, err := url.Parse(os.Args[1])
	checkError(err)

	for n := 0; n < 1000; n++ {
		// build a TCP connection to the proxy first
		host := url_.Host
		conn, err := net.Dial("tcp", host)
		checkError(err)

		// then wrap an HTTP client connection around it
		clientConn := httputil.NewClientConn(conn, nil)
		if clientConn == nil {
			fmt.Println("Can't build connection")
			os.Exit(1)
		}

		request := http.Request{Method: "GET", URL: url_}
		dump, _ := httputil.DumpRequest(&request, false)
		fmt.Println(string(dump))

		// send the request
		err = clientConn.Write(&request)
		checkError(err)

		// and get the response
		response, err := clientConn.Read(&request)
		checkError(err)

		var buf [512]byte
		reader := response.Body
		for {
			n, err := reader.Read(buf[0:])
			if err != nil {
				break
			}
			fmt.Print(string(buf[0:n]))
		}
		clientConn.Close()
	}
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### LowLevelServer.go

```go

package main

import (
	"net/http"
)

func main() {

	myHandler := http.HandlerFunc(func(rw http.ResponseWriter, request *http.Request) {
		// Just return no content - arbitrary headers can be set, arbitrary body
		rw.WriteHeader(http.StatusNoContent)
	})

	http.ListenAndServe(":8080", myHandler)
}

```

### PersistentClient.go

```go

package main

import (
	"fmt"
	"net"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
	"time"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "http://host:port/page")
		os.Exit(1)
	}
	url, err := url.Parse(os.Args[1])
	checkError(err)

	// build a TCP connection to the proxy first
	host := url.Host
	conn, err := net.Dial("tcp", host)
	checkError(err)

	// then wrap an HTTP client connection around it
	clientConn := httputil.NewClientConn(conn, nil)
	if clientConn == nil {
		fmt.Println("Can't build connection")
		os.Exit(1)
	}

	request := http.Request{Method: "GET", URL: url,
		Close: false, Proto: "HTTP/1.1",
		ProtoMajor: 1, ProtoMinor: 1}
	dump, _ := httputil.DumpRequest(&request, true)
	fmt.Println(string(dump))

	for n := 0; n < 1000; n++ {
		// send the request
		err = clientConn.Write(&request)
		if err == httputil.ErrPersistEOF {
			fmt.Println("Persist closed on write")
			break
		}
		checkError(err)

		// and get the response
		response, err := clientConn.Read(&request)
		if err == httputil.ErrPersistEOF {
			fmt.Println("Persist closed on read")
			break
		}

		checkError(err)

		var buf [512]byte
		reader := response.Body
		for {
			n, err := reader.Read(buf[0:])
			if err != nil {
				fmt.Println("No body")
				break
			}
			fmt.Print(string(buf[0:n]))
		}
		time.Sleep(1e9)
	}

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PersistentServer.go

```go

package main

import (
	"fmt"
	"net"
	"net/http"
	"net/http/httputil"
	"os"
	"time"
)

func main() {

	// create a TCP server first
	listener, err := net.Listen("tcp", ":8000")
	checkError(err)

	// then wrap an HTTP client connection around it

	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}
		fmt.Println("Accepted")
		go handleConnection(conn)
	}
	os.Exit(0)
}

func handleConnection(conn net.Conn) {
	serverConn := httputil.NewServerConn(conn, nil)
	if serverConn == nil {
		fmt.Println("Can't build connection")
		return
	}

	// timeout
	go func(serverConn *httputil.ServerConn) {
		time.Sleep(10e9) // 10 seconds
		serverConn.Close()
	}(serverConn)

	for {
		req, err := serverConn.Read()
		if err != nil {
			if err == httputil.ErrPersistEOF {
				// client has closed ok
				fmt.Println("Persistent conn closed on read")
				break
			}
			// unexpected error
			fmt.Println(err.Error())
			break
		}
		bytes, _ := httputil.DumpRequest(req, false)
		fmt.Println(string(bytes))

		// Prepare "no content" reponse
		response := http.Response{
			Status:     "204 No Content",
			StatusCode: 204,
			Proto:      "HTTP/1.1",
			ProtoMajor: 1,
			ProtoMinor: 1,
			Request:    req,
			Close:      false,
		}
		serverConn.Write(req, &response)
		fmt.Println("wrote response")
	}
	serverConn.Close()
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PrintEnv.go

```go

package main

import (
	"fmt"
	"net/http"
	"os"
)

func main() {
	// file handler for most files
	fileServer := http.FileServer(http.Dir("/var/www"))
	http.Handle("/", fileServer)

	// function handler for /cgi-bin/printenv
	http.HandleFunc("/cgi-bin/printenv", printEnv)

	// deliver requests to the handlers
	err := http.ListenAndServe(":8000", nil)
	checkError(err)
	// That's it!
}

func printEnv(writer http.ResponseWriter, req *http.Request) {
	env := os.Environ()
	writer.Write([]byte("<h1>Environment</h1>\n<pre>"))
	for _, v := range env {
		writer.Write([]byte(v + "\n"))
	}
	writer.Write([]byte("</pre>"))
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ProxyAuthGet.go

```go

package main

import (
	"encoding/base64"
	"fmt"
	"io"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
)

const auth = "jannewmarch:mypassword"

func main() {
	if len(os.Args) != 3 {
		fmt.Println("Usage: ", os.Args[0], "http://proxy-host:port http://host:port/page")
		os.Exit(1)
	}
	proxy := os.Args[1]
	proxyURL, err := url.Parse(proxy)
	checkError(err)
	rawURL := os.Args[2]
	url, err := url.Parse(rawURL)
	checkError(err)

	// encode the auth
	basic := "Basic " + base64.StdEncoding.EncodeToString([]byte(auth))

	transport := &http.Transport{Proxy: http.ProxyURL(proxyURL)}
	client := &http.Client{Transport: transport}

	request, err := http.NewRequest("GET", url.String(), nil)

	request.Header.Add("Proxy-Authorization", basic)
	dump, _ := httputil.DumpRequest(request, false)
	fmt.Println(string(dump))

	// send the request
	response, err := client.Do(request)

	checkError(err)
	fmt.Println("Read ok")

	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		os.Exit(2)
	}
	fmt.Println("Reponse ok")

	var buf [512]byte
	reader := response.Body
	for {
		n, err := reader.Read(buf[0:])
		if err != nil {
			os.Exit(0)
		}
		fmt.Print(string(buf[0:n]))
	}

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		if err == io.EOF {
			return
		}
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ProxyGet.go

```go

package main

import (
	"fmt"
	"io"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
)

func main() {
	if len(os.Args) != 3 {
		fmt.Println("Usage: ", os.Args[0], "http://proxy-host:port http://host:port/page")
		os.Exit(1)
	}
	proxyString := os.Args[1]
	proxyURL, err := url.Parse(proxyString)
	checkError(err)
	rawURL := os.Args[2]
	url,err := url.Parse(rawURL)
	checkError(err)

	transport := &http.Transport{Proxy: http.ProxyURL(proxyURL)}
	client := &http.Client{Transport: transport}

	request, err := http.NewRequest("GET", url.String(), nil)

	urlp, _ := transport.Proxy(request)
	fmt.Println("Proxy ", urlp)
	dump, _ := httputil.DumpRequest(request, false)
	fmt.Println(string(dump))

	response, err := client.Do(request)

	checkError(err)
	fmt.Println("Read ok")

	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		os.Exit(2)
	}
	fmt.Println("Reponse ok")

	var buf [512]byte
	reader := response.Body
	for {
		n, err := reader.Read(buf[0:])
		if err != nil {
			os.Exit(0)
		}
		fmt.Print(string(buf[0:n]))
	}

	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		if err == io.EOF {
			return
		}
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ServerHandler.go

```go

package main

import (
	"net/http"
)

func main() {

	myHandler := http.HandlerFunc(func(rw http.ResponseWriter, request *http.Request) {
		// Just return no content - arbitrary headers can be set, arbitrary body
		rw.WriteHeader(http.StatusNoContent)
	})

	http.ListenAndServe(":8080", myHandler)
}

```

### TLSClientGet.go

```go

package main

import (
	"fmt"
	"net/http"
	"net/url"
	"os"
	"strings"
	//"crypto/tls"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "https://host:port/page")
		os.Exit(1)
	}
	url, err := url.Parse(os.Args[1])
	checkError(err)

	//transport := &http.Transport{}
	//transport.TLSClientConfig = &tls.Config{InsecureSkipVerify: true}
	//client := &http.Client{Transport: transport}
	client := &http.Client{}

	request, err := http.NewRequest("GET", url.String(), nil)
	// only accept UTF-8
	checkError(err)

	response, err := client.Do(request)
	checkError(err)

	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		os.Exit(2)
	}
	fmt.Println("git a repsonse")

	chSet := getCharset(response)
	fmt.Printf("got charset %s\n", chSet)
	if chSet != "UTF-8" {
		fmt.Println("Cannot handle", chSet)
		os.Exit(4)
	}

	var buf [512]byte
	reader := response.Body
	fmt.Println("got body")
	for {
		n, err := reader.Read(buf[0:])
		if err != nil {
			os.Exit(0)
		}
		fmt.Print(string(buf[0:n]))
	}

	os.Exit(0)
}

func getCharset(response *http.Response) string {
	contentType := response.Header.Get("Content-Type")
	if contentType == "" {
		// guess
		return "UTF-8"
	}
	idx := strings.Index(contentType, "charset:")
	if idx == -1 {
		// guess
		return "UTF-8"
	}
	return strings.Trim(contentType[idx:], " ")
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### TLSUnsafeClientGet.go

```go

package main

import (
	"fmt"
	"net/http"
	"net/url"
	"os"
	"strings"
	"crypto/tls"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "https://host:port/page")
		os.Exit(1)
	}
	url, err := url.Parse(os.Args[1])
	checkError(err)
	if url.Scheme != "https" {
		fmt.Println("Not https scheme ", url.Scheme)
		os.Exit(1)
	}

	transport := &http.Transport{}
	transport.TLSClientConfig = &tls.Config{InsecureSkipVerify: true}
	client := &http.Client{Transport: transport}

	request, err := http.NewRequest("GET", url.String(), nil)
	// only accept UTF-8
	checkError(err)

	response, err := client.Do(request)
	checkError(err)

	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		os.Exit(2)
	}
	fmt.Println("git a repsonse")

	chSet := getCharset(response)
	fmt.Printf("got charset %s\n", chSet)
	if chSet != "UTF-8" {
		fmt.Println("Cannot handle", chSet)
		os.Exit(4)
	}

	var buf [512]byte
	reader := response.Body
	fmt.Println("got body")
	for {
		n, err := reader.Read(buf[0:])
		if err != nil {
			os.Exit(0)
		}
		fmt.Print(string(buf[0:n]))
	}

	os.Exit(0)
}

func getCharset(response *http.Response) string {
	contentType := response.Header.Get("Content-Type")
	if contentType == "" {
		// guess
		return "UTF-8"
	}
	idx := strings.Index(contentType, "charset:")
	if idx == -1 {
		// guess
		return "UTF-8"
	}
	return strings.Trim(contentType[idx:], " ")
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 9. Templates

### PrintEmails.go

```go

package main

import (
	"fmt"
	"os"
	"strings"
	"text/template"
)

type Person struct {
	Name   string
	Emails []string
}

const templ = `The name is {{.Name}}.
{{range .Emails}}
        An email is "{{. | emailExpand}}"
{{end}}
`

func EmailExpander(args ...interface{}) string {
	ok := false
	var s string
	if len(args) == 1 {
		s, ok = args[0].(string)
	}
	if !ok {
		s = fmt.Sprint(args...)
	}

	// find the @ symbol
	substrs := strings.Split(s, "@")
	if len(substrs) != 2 {
		return s
	}
	// replace the @ by " at "
	return (substrs[0] + " at " + substrs[1])
}

func main() {
	person := Person{
		Name:   "jan",
		Emails: []string{"jan@newmarch.name", "jan.newmarch@gmail.com"},
	}

	t := template.New("Person template")

	// add our function
	t = t.Funcs(template.FuncMap{"emailExpand": EmailExpander})

	t, err := t.Parse(templ)

	checkError(err)

	err = t.Execute(os.Stdout, person)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PrintJSONEmails.go

```go

package main

import (
	"text/template"
	"os"
	"fmt"
)

type Person struct {
	Name   string
	Emails []string
}

const templ = `{"Name": "{{.Name}}",
 "Emails": [
{{range $index, $elmt := .Emails}}
    {{if $index}}
        , "{{$elmt}}"
    {{else}}
         "{{$elmt}}"
    {{end}}
{{end}}
 ]
}
`

func main() {
	person := Person{
		Name:   "jan",
		Emails: []string{"jan@newmarch.name", "jan.newmarch@gmail.com"},
	}

	t := template.New("Person template")
	t, err := t.Parse(templ)
	checkError(err)

	err = t.Execute(os.Stdout, person)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PrintNameEmails.go

```go

package main

import (
	"text/template"
	"os"
	"fmt"
)

type Person struct {
	Name   string
	Emails []string
}

const templ = `{{$name := .Name}}
{{range .Emails}}
    Name is {{$name}}, email is {{.}}
{{end}}
`

func main() {
	person := Person{
		Name:   "jan",
		Emails: []string{"jan@newmarch.name", "jan.newmarch@gmail.com"},
	}

	t := template.New("Person template")
	t, err := t.Parse(templ)
	checkError(err)

	err = t.Execute(os.Stdout, person)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PrintPerson.go

```go

package main

import (
	"fmt"
	"text/template"
	"os"
)

type Person struct {
	Name   string
	Age    int
	Emails []string
	Jobs   []*Job
}

type Job struct {
	Employer string
	Role     string
}

const templ = `The name is {{.Name}}.
The age is {{.Age}}.
{{range .Emails}}
        An email is {{.}}
{{end}}

{{with .Jobs}}
    {{range .}}
        An employer is {{.Employer}}
        and the role is {{.Role}}
    {{end}}
{{end}}
`

func main() {
	job1 := Job{Employer: "Box Hill Institute", Role: "Director, Commerce and ICT"}
	job2 := Job{Employer: "Canberra University", Role: "Adjunct Professor"}

	person := Person{
		Name:   "jan",
		Age:    66,
		Emails: []string{"jan@newmarch.name", "jan.newmarch@gmail.com"},
		Jobs:   []*Job{&job1, &job2},
	}

	t := template.New("Person template")
	t, err := t.Parse(templ)
	checkError(err)

	err = t.Execute(os.Stdout, person)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PrintPersonAttack.go

```go

package main

import (
	"fmt"
	"text/template"
	"os"
)

type Person struct {
	Name   string
	Age    int
	Emails []string
	Jobs   []*Job
}

type Job struct {
	Employer string
	Role     string
}

const templ = `The name is {{.Name}}.
The age is {{.Age}}.
{{range .Emails}}
        An email is {{.}}
{{end}}

{{with .Jobs}}
    {{range .}}
        An employer is {{.Employer}}
        and the role is {{.Role}}
    {{end}}
{{end}}
`

func main() {
	job1 := Job{Employer: "<script>alert('Could be nasty!')</script>", Role: "Director, Commerce and ICT"}
	job2 := Job{Employer: "Canberra University", Role: "Adjunct Professor"}

	person := Person{
		Name:   "jan",
		Age:    66,
		Emails: []string{"jan@newmarch.name", "jan.newmarch@gmail.com"},
		Jobs:   []*Job{&job1, &job2},
	}

	t := template.New("Person template")
	t, err := t.Parse(templ)
	checkError(err)

	err = t.Execute(os.Stdout, person)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PrintPersonSafer.go

```go

package main

import (
	"fmt"
	"html/template"
	"os"
)

type Person struct {
	Name   string
	Age    int
	Emails []string
	Jobs   []*Job
}

type Job struct {
	Employer string
	Role     string
}

const templ = `The name is {{.Name}}.
The age is {{.Age}}.
{{range .Emails}}
        An email is {{.}}
{{end}}

{{with .Jobs}}
    {{range .}}
        An employer is {{.Employer | html}}
        and the role is {{.Role}}
    {{end}}
{{end}}
`

func main() {
	job1 := Job{Employer: "<script>alert('Could be nasty!')</script>", Role: "Director, Commerce and ICT"}
	job2 := Job{Employer: "Canberra University", Role: "Adjunct Professor"}

	person := Person{
		Name:   "jan",
		Age:    66,
		Emails: []string{"jan@newmarch.name", "jan.newmarch@gmail.com"},
		Jobs:   []*Job{&job1, &job2},
	}

	t := template.New("Person template")
	t, err := t.Parse(templ)
	checkError(err)

	err = t.Execute(os.Stdout, person)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### Sequence.go

```go

package main

import (
	"errors"
	"fmt"
	"os"
	"text/template"
)

var tmpl = `{{$comma := sequence "" ", "}}
{{range $}}{{$comma.Next}}{{.}}{{end}}
{{$comma := sequence "" ", "}}
{{$colour := cycle "black" "white" "red"}}
{{range $}}{{$comma.Next}}{{.}} in {{$colour.Next}}{{end}}
`

var fmap = template.FuncMap{
	"sequence": sequenceFunc,
	"cycle":    cycleFunc,
}

func main() {
	t, err := template.New("").Funcs(fmap).Parse(tmpl)
	if err != nil {
		fmt.Printf("parse error: %v\n", err)
		return
	}
	err = t.Execute(os.Stdout, []string{"a", "b", "c", "d", "e", "f"})
	if err != nil {
		fmt.Printf("exec error: %v\n", err)
	}
}

type generator struct {
	ss []string
	i  int
	f  func(s []string, i int) string
}

func (seq *generator) Next() string {
	s := seq.f(seq.ss, seq.i)
	seq.i++
	return s
}

func sequenceGen(ss []string, i int) string {
	if i >= len(ss) {
		return ss[len(ss)-1]
	}
	return ss[i]
}

func cycleGen(ss []string, i int) string {
	return ss[i%len(ss)]
}

func sequenceFunc(ss ...string) (*generator, error) {
	if len(ss) == 0 {
		return nil, errors.New("sequence must have at least one element")
	}
	return &generator{ss, 0, sequenceGen}, nil
}

func cycleFunc(ss ...string) (*generator, error) {
	if len(ss) == 0 {
		return nil, errors.New("cycle must have at least one element")
	}
	return &generator{ss, 0, cycleGen}, nil
}

```

## 10. A Complete Web Server

### Dictionary.go

```go
package dictionary

import (
	"bufio"
	"fmt"
	"os"
	//"fmt"
	"container/vector"
	"strings"
)

func main() {
	// called only when debugging this package
	dictionaryPath := "/var/www/go/chinese/cedict_ts.u8"
	d := new(Dictionary)
	d.loadDictionary(dictionaryPath)

	// check it loaded okay
	goodD := d.LookupEnglish("good")
	fmt.Println(goodD.String())
}

type DictionaryEntry struct {
	Traditional  string
	Simplified   string
	Pinyin       string
	Translations []string
}

func (de DictionaryEntry) String() string {
	str := de.Traditional + de.Simplified + de.Pinyin
	for _, t := range de.Translations {
		str = str + "\n    " + t
	}
	return str
}

type Dictionary struct {
	vector.Vector
}

func (d *Dictionary) String() string {
	str := ""
	for n := 0; n < d.Len(); n++ {
		de := d.At(n).(*DictionaryEntry)
		str += de.String() + "\n"
	}
	return str
}

func (d *Dictionary) LookupPinyin(py string) *Dictionary {
	newD := new(Dictionary)
	for n := 0; n < d.Len(); n++ {
		de := d.At(n).(*DictionaryEntry)
		if de.Pinyin == py {
			newD.Push(de)
		}
	}
	return newD
}

func (d *Dictionary) LookupEnglish(eng string) *Dictionary {
	newD := new(Dictionary)
	for n := 0; n < d.Len(); n++ {
		de := d.At(n).(*DictionaryEntry)
		for _, e := range de.Translations {
			if e == eng {
				newD.Push(de)
			}
		}
	}
	return newD
}

func (d *Dictionary) loadDictionary(path string) {

	f, err := os.Open(path)
	r := bufio.NewReader(f)
	if err != nil {
		fmt.Println(err.String())
		os.Exit(1)
	}
	for {
		line, err := r.ReadString('\n')
		if line[0] == '#' {
			continue
		}
		if err != nil {
			return
		}

		trad, simp, pinyin, translations := parseDictEntry(line)

		de := DictionaryEntry{
			Traditional:  trad,
			Simplified:   simp,
			Pinyin:       pinyin,
			Translations: translations}

		d.Push(&de)
	}
}

func parseDictEntry(line string) (string, string, string, []string) {
	// format is
	//    trad simp [pinyin] /trans/trans/.../
	tradEnd := strings.Index(line, " ")
	trad := line[0:tradEnd]
	line = strings.TrimSpace(line[tradEnd:])

	simpEnd := strings.Index(line, " ")
	simp := line[0:simpEnd]
	line = strings.TrimSpace(line[simpEnd:])

	pinyinEnd := strings.Index(line, "]")
	pinyin := line[1:pinyinEnd]
	line = strings.TrimSpace(line[pinyinEnd+1:])

	translations := strings.Split(line, "/")
	// includes empty at start and end, so
	translations = translations[1 : len(translations)-1]

	return trad, simp, pinyin, translations
}

```

### Dictionary.total.go

```go

	//haoD := d.LookupPinyin("hao2")
	//fmt.Println(haoD.String())

	goodD := d.LookupEnglish("good")
	fmt.Println(goodD.String())
}

type DictionaryEntry struct {
	Traditional  string
	Simplified   string
	Pinyin       string
	Translations []string
}

func (de DictionaryEntry) String() string {
	str := de.Traditional + de.Simplified + de.Pinyin
	for _, t := range de.Translations {
		str = str + "\n    " + t
	}
	return str
}

type Dictionary struct {
	vector.Vector
}

func (d *Dictionary) String() string {
	str := ""
	for n := 0; n < d.Len(); n++ {
		de := d.At(n).(*DictionaryEntry)
		str += de.String() + "\n"
	}
	return str
}

func (d *Dictionary) LookupPinyin(py string) *Dictionary {
	newD := new(Dictionary)
	for n := 0; n < d.Len(); n++ {
		de := d.At(n).(*DictionaryEntry)
		if de.Pinyin == py {
			newD.Push(de)
		}
	}
	return newD
}

func (d *Dictionary) LookupEnglish(eng string) *Dictionary {
	newD := new(Dictionary)
	for n := 0; n < d.Len(); n++ {
		de := d.At(n).(*DictionaryEntry)
		for _, e := range de.Translations {
			if e == eng {
				newD.Push(de)
			}
		}
	}
	return newD
}

func (d *Dictionary) loadDictionary(path string) {

	f, err := os.Open(path)
	r := bufio.NewReader(f)
	if err != nil {
		fmt.Println(err.String())
		os.Exit(1)
	}
	for {
		line, err := r.ReadString('\n')
		if line[0] == '#' {
			continue
		}
		if err != nil {
			return
		}

		trad, simp, pinyin, translations := parseDictEntry(line)

		de := DictionaryEntry{
			Traditional:  trad,
			Simplified:   simp,
			Pinyin:       pinyin,
			Translations: translations}

		d.Push(&de)
	}
}

func parseDictEntry(line string) (string, string, string, []string) {
	// format is
	//    trad simp [pinyin] /trans/trans/.../
	/* doesn't work:
	_, err = fmt.Sscanf(line, "%s %s [[]%200c[]] /%200c/",
	&trad, &simp, &pinyin, &meaning)
	if err != nil {
	fmt.Print(err.String(), line)
	}
	*/
	tradEnd := strings.Index(line, " ")
	trad := line[0:tradEnd]
	line = strings.TrimSpace(line[tradEnd:])

	simpEnd := strings.Index(line, " ")
	simp := line[0:simpEnd]
	line = strings.TrimSpace(line[simpEnd:])

	pinyinEnd := strings.Index(line, "]")
	pinyin := line[1:pinyinEnd]
	line = strings.TrimSpace(line[pinyinEnd+1:])

	translations := strings.Split(line, "/")
	// includes empty at start and end, so
	translations = translations[1 : len(translations)-1]

	return trad, simp, pinyin, translations
}

type FlashCard struct {
	English string
	Card    DictionaryEntry
}

type FlashCards struct {
	vector.Vector
}

```

### FlashCards.go

```go
package flashcard

import (
	"container/vector"
	"dictionary"
)

type FlashCard struct {
	English string
	Card    DictionaryEntry
}

type FlashCards struct {
	vector.Vector
}

```

### PrintTest.go

```go
package main

import (
	"fmt"
)

func main() {
	a := []int{1, 2, 3, 4}
	s := a.String()
	fmt.Println(s)
}

```

### Server.go

```go

package main

import (
	"fmt"
	"net/http"
	"os"
	"html/template"
)

import (
	//"dictionary"
	"flashcards"
	"templatefuncs"
)

//var d *dictionary.Dictionary

func main() {
	if len(os.Args) != 2 {
		fmt.Fprint(os.Stderr, "Usage: ", os.Args[0], ":port\n")
		os.Exit(1)
	}
	port := os.Args[1]

	//dictionaryPath := "cedict_ts.u8"
	//d = new(dictionary.Dictionary)
	//d.Load(dictionaryPath)
	//fmt.Println("Loaded dict", len(d.Entries))

	http.HandleFunc("/", listFlashCards)
	fileServer := http.StripPrefix("/jscript/", http.FileServer(http.Dir("jscript")))
	http.Handle("/jscript/", fileServer)
	fileServer = http.StripPrefix("/html/", http.FileServer(http.Dir("html")))
	http.Handle("/html/", fileServer)

	http.HandleFunc("/flashcards.html", listFlashCards)
	http.HandleFunc("/flashcardSets", manageFlashCards)

	// deliver requests to the handlers
	err := http.ListenAndServe(port, nil)
	checkError(err)
	// That's it!
}

func listFlashCards(rw http.ResponseWriter, req *http.Request) {

	flashCardsNames := flashcards.ListFlashCardsNames()
	t, err := template.ParseFiles("html/ListFlashcards.html")
	if err != nil {
		http.Error(rw, err.Error(), http.StatusInternalServerError)
		return
	}
	t.Execute(rw, flashCardsNames)
}

/*
 * Called from ListFlashcards.html on form submission
 */
func manageFlashCards(rw http.ResponseWriter, req *http.Request) {

	set := req.FormValue("flashcardSets")
	order := req.FormValue("order")
	action := req.FormValue("submit")
	half := req.FormValue("half")
	fmt.Println("set chosen is", set)
	fmt.Println("order is", order)
	fmt.Println("action is", action)
	fmt.Println("half is", half)

	cardname := "flashcardSets/" + set

	fmt.Println("cardname", cardname, "action", action)
	if action == "Show cards in set" {
		showFlashCards(rw, cardname, order, half)
	} else if action == "List words in set" {
		listWords(rw, cardname)
	}
}

func showFlashCards(rw http.ResponseWriter, cardname, order, half string) {
	fmt.Println("Loading card name", cardname)
	cards := new(flashcards.FlashCards)
	flashcards.LoadJSON(cardname, &cards)
	if order == "Sequential" {
		cards.CardOrder = "SEQUENTIAL"
	} else {
		cards.CardOrder = "RANDOM"
	}
	fmt.Println("half is", half)
	if half == "Random" {
		cards.ShowHalf = "RANDOM_HALF"
	} else if half == "English" {
		cards.ShowHalf = "ENGLISH_HALF"
	} else {
		cards.ShowHalf = "CHINESE_HALF"
	}
	fmt.Println("loaded cards", len(cards.Cards))
	fmt.Println("Card name", cards.Name)

	t := template.New("ShowFlashcards.html")
	t = t.Funcs(template.FuncMap{"pinyin": templatefuncs.PinyinFormatter})
	t, err := t.ParseFiles("html/ShowFlashcards.html")
	if err != nil {
		fmt.Println(err.Error())
		http.Error(rw, err.Error(), http.StatusInternalServerError)
		return
	}
	err = t.Execute(rw, cards)
	if err != nil {
		fmt.Println("Execute error " + err.Error())
		http.Error(rw, err.Error(), http.StatusInternalServerError)
		return
	}
}

func listWords(rw http.ResponseWriter, cardname string) {
	fmt.Println("Loading card name", cardname)
	cards := new(flashcards.FlashCards)
	flashcards.LoadJSON(cardname, cards)
	fmt.Println("loaded cards", len(cards.Cards))
	fmt.Println("Card name", cards.Name)

	t := template.New("ListWords.html")

	t = t.Funcs(template.FuncMap{"pinyin": templatefuncs.PinyinFormatter})
	t, err := t.ParseFiles("html/ListWords.html")

	if err != nil {
		fmt.Println("Parse error " + err.Error())
		http.Error(rw, err.Error(), http.StatusInternalServerError)
		return
	}
	err = t.Execute(rw, cards)
	if err != nil {
		fmt.Println("Execute error " + err.Error())
		http.Error(rw, err.Error(), http.StatusInternalServerError)
		return
	}
	fmt.Println("No error ")
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### Serverless.go

```go

package main

import (
	"fmt"
	"net/http"
	"os"
	"html/template"
)

import (
	"dictionary"
	"flashcards"
	"templatefuncs"
)

var d *dictionary.Dictionary

func main() {
	if len(os.Args) != 2 {
		fmt.Fprint(os.Stderr, "Usage: ", os.Args[0], ":port\n")
		os.Exit(1)
	}
	port := os.Args[1]

	dictionaryPath := "cedict_ts.u8"
	d = new(dictionary.Dictionary)
	d.Load(dictionaryPath)
	fmt.Println("Loaded dict", len(d.Entries))

	http.HandleFunc("/", listFlashCards)
	fileServer := http.StripPrefix("/jscript/", http.FileServer(http.Dir("jscript")))
	http.Handle("/jscript/", fileServer)
	fileServer = http.StripPrefix("/html/", http.FileServer(http.Dir("html")))
	http.Handle("/html/", fileServer)

	http.HandleFunc("/flashcards.html", listFlashCards)
	http.HandleFunc("/flashcardSets", manageFlashCards)

	// deliver requests to the handlers
	err := http.ListenAndServe(port, nil)
	checkError(err)
	// That's it!
}

func listFlashCards(rw http.ResponseWriter, req *http.Request) {
	...
}

/*
 * Called from ListFlashcards.html on form submission
 */
func manageFlashCards(rw http.ResponseWriter, req *http.Request) {
	...
}

func showFlashCards(rw http.ResponseWriter, cardname, order, half string) {
	...
}

func listWords(rw http.ResponseWriter, cardname string) {
	...
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### Dictionary.go

```go
package dictionary

type Entry struct {
	Traditional  string
	Simplified   string
	Pinyin       string
	Translations []string
}

type Dictionary struct {
	Entries []*Entry
}

```

### FlashCards.go

```go
package flashcards

import (
	"dictionary"
	"fmt"
	"encoding/json"
	"os"
	"sort"
)

type FlashCard struct {
	Simplified string
	English    string
	Dictionary *dictionary.Dictionary
}

type FlashCards struct {
	Name      string
	CardOrder string
	ShowHalf  string
	Cards     []*FlashCard
}

func LoadJSON(fileName string, key interface{}) {
	inFile, err := os.Open(fileName)
	checkError(err)
	decoder := json.NewDecoder(inFile)
	err = decoder.Decode(key)
	checkError(err)
	inFile.Close()
}

func ListFlashCardsNames() []string {
	flashcardsDir, err := os.Open("flashcardSets")
	if err != nil {
		return nil
	}
	files, err := flashcardsDir.Readdir(-1)

	fileNames := make([]string, len(files))
	for n, f := range files {
		fileNames[n] = f.Name()
	}
	sort.Strings(fileNames)
	return fileNames
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Error ", err.Error())
	}
}

```

### PinyinFormatter.go

```go

	n := strings.Index(word, "a")
	if n != -1 {
		aAcc := aAccent[tone]
		// replace 'a' with its tone version
		word = word[0:n] + string(aAcc) + word[(n+1):len(word)-1]
	} else {
		n := strings.Index(word, "e")
		if n != -1 {
			eAcc := eAccent[tone]
			word = word[0:n] + string(eAcc) +
				word[(n+1):len(word)-1]
		} else {
			n = strings.Index(word, "ou")
			if n != -1 {
				oAcc := oAccent[tone]
				word = word[0:n] + string(oAcc) + "u" +
					word[(n+2):len(word)-1]
			} else {
				chars := []rune(word)
				length := len(chars)
				// put tone onthe last vowel
			L:
				for n, _ := range chars {
					m := length - n - 1
					switch chars[m] {
					case 'i':
						chars[m] = iAccent[tone]
						break L
					case 'o':
						chars[m] = oAccent[tone]
						break L
					case 'u':
						chars[m] = uAccent[tone]
						break L
					case 'ü':
						chars[m] = üAccent[tone]
						break L
					default:
					}
				}
				word = string(chars[0 : len(chars)-1])
			}
		}
	}

	return word
}

```

### PinyinFormatter.go

```go

	n := strings.Index(word, "a")
	if n != -1 {
		aAcc := aAccent[tone]
		// replace 'a' with its tone version
		word = word[0:n] + string(aAcc) + word[(n+1):len(word)-1]
	} else {
		n := strings.Index(word, "e")
		if n != -1 {
			eAcc := eAccent[tone]
			word = word[0:n] + string(eAcc) +
				word[(n+1):len(word)-1]
		} else {
			n = strings.Index(word, "ou")
			if n != -1 {
				oAcc := oAccent[tone]
				word = word[0:n] + string(oAcc) + "u" +
					word[(n+2):len(word)-1]
			} else {
				chars := []rune(word)
				length := len(chars)
				// put tone onthe last vowel
			L:
				for n, _ := range chars {
					m := length - n - 1
					switch chars[m] {
					case 'i':
						chars[m] = iAccent[tone]
						break L
					case 'o':
						chars[m] = oAccent[tone]
						break L
					case 'u':
						chars[m] = uAccent[tone]
						break L
					case 'ü':
						chars[m] = üAccent[tone]
						break L
					default:
					}
				}
				word = string(chars[0 : len(chars)-1])
			}
		}
	}
	return word
}

```

## 11. HTML

### EscapeString.go

```go

package main

import (
	"fmt"
	"html"
	"io/ioutil"
	"net/http"
	"os"
)

func main() {
	http.HandleFunc("/", escapeString)

	err := http.ListenAndServe(":8080", nil)
	checkError(err)
}

func escapeString(rw http.ResponseWriter, req *http.Request) {
	fmt.Println(req.URL.Path)
	bytes, err := ioutil.ReadFile("." + req.URL.Path)
	if err != nil {
		rw.WriteHeader(http.StatusNotFound)
		return
	}

	escapedStr := html.EscapeString(string(bytes))
	htmlText := "<html><body><pre><code>" +
		escapedStr +
		" </code></pre></body></html>"
	rw.Write([]byte(htmlText))
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Error ", err.Error())
		os.Exit(1)
	}
}

```

### ReadHTML.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/html"
	"io/ioutil"
	"os"
	"strings"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "file")
		os.Exit(1)
	}
	file := os.Args[1]
	bytes, err := ioutil.ReadFile(file)
	checkError(err)
	r := strings.NewReader(string(bytes))

	z := html.NewTokenizer(r)

	depth := 0
	for {
		tt := z.Next()

		for n := 0; n < depth; n++ {
			fmt.Print(" ")
		}

		switch tt {
		case html.ErrorToken:
			fmt.Println("Error ", z.Err().Error())
			os.Exit(0)
		case html.TextToken:
			fmt.Println("Text: \"" + z.Token().String() + "\"")
		case html.StartTagToken, html.EndTagToken:
			fmt.Println("Tag: \"" + z.Token().String() + "\"")
			if tt == html.StartTagToken {
				depth++
			} else {
				depth--
			}
		}
	}

}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 12. XML

### Marshal.go

```go

package main

import (
	"encoding/xml"
	"fmt"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string "attr"
	Address string "chardata"
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan"},
			Email{Kind: "work", Address: "jan"}}}

	buff, _ := xml.Marshal(person)
	fmt.Println(string(buff))
}

```

### NewMarshal.go

```go

package main

import (
	"encoding/xml"
	"fmt"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string "attr"
	Address string "chardata"
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan"},
			Email{Kind: "work", Address: "jan"}}}

	buff, _ := xml.Marshal(person)
	fmt.Println(string(buff))
}

```

### OldMarshal.go

```go

package main

import (
	"bytes"
	"fmt"
	"io"
	"os"
	"reflect"
)

type Person struct {
	Name  Name
	Email []Email
}

type Name struct {
	Family   string
	Personal string
}

type Email struct {
	Kind    string "attr"
	Address string "chardata"
}

func main() {
	person := Person{
		Name: Name{Family: "Newmarch", Personal: "Jan"},
		Email: []Email{Email{Kind: "home", Address: "jan"},
			Email{Kind: "work", Address: "jan"}}}

	buff := bytes.NewBuffer(nil)
	Marshal(person, buff)
	fmt.Println(buff.String())
}

func Marshal(e interface{}, w io.Writer) {
	// make it a legal XML document
	w.Write([]byte("<?xml version=\"1.1\" encoding=\"UTF-8\" ?>\n"))

	// topvel e is a value and has no structure field,
	// so use its type
	typ := reflect.TypeOf(e)
	name := typ.Name()

	startTag(name, w)
	MarshalValue(reflect.ValueOf(e), w)
	endTag(name, w)
}

func MarshalValue(v reflect.Value, w io.Writer) {
	t := v.Type()
	switch t.Kind() {
	case reflect.Struct:
		for n := 0; n < t.NumField(); n++ {
			field := t.Field(n)

			vv := v

			// special case if it is a slice

			if vv.Field(n).Type().Kind() == reflect.Slice {
				// slice
				MarshalSliceValue(field.Name,
					vv.Field(n), w)
			} else {
				// not a slice
				startTag(field.Name, w)
				MarshalValue(vv.Field(n), w)
				endTag(field.Name, w)
			}
		}
	case reflect.Int, reflect.Int8, reflect.Int16, reflect.Int32, reflect.Int64, reflect.Uint, reflect.Uint8, reflect.Uint16, reflect.Uint32, reflect.Uint64, reflect.Uintptr:
	case reflect.Bool:
	case reflect.String:
		vv := v
		w.Write([]byte("   " + vv.String() + "\n"))
	default:
	}
}

func MarshalSliceValue(tag string, v reflect.Value, w io.Writer) {
	for n := 0; n < v.Len(); n++ {
		startTag(tag, w)
		MarshalValue(v.Index(n), w)
		endTag(tag, w)
	}
}

func startTag(s string, w io.Writer) {
	w.Write([]byte("<" + s + ">\n"))
}

func endTag(s string, w io.Writer) {
	w.Write([]byte("</" + s + ">\n"))
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ParseHTML.go

```go

package main

import (
	"encoding/xml"
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "file")
		os.Exit(1)
	}
	file := os.Args[1]
	bytes, err := ioutil.ReadFile(file)
	checkError(err)
	r := strings.NewReader(string(bytes))

	parser := xml.NewDecoder(r)
	parser.Strict = false
	parser.AutoClose = xml.HTMLAutoClose
	parser.Entity = xml.HTMLEntity

	depth := 0
	for {
		token, err := parser.Token()
		if err != nil {
			break
		}
		switch t := token.(type) {
		case xml.StartElement:
			elmt := xml.StartElement(t)
			name := elmt.Name.Local
			printElmt(name, depth)
			depth++
		case xml.EndElement:
			depth--
			elmt := xml.EndElement(t)
			name := elmt.Name.Local
			printElmt(name, depth)
		case xml.CharData:
			bytes := xml.CharData(t)
			printElmt("\""+string([]byte(bytes))+"\"", depth)
		case xml.Comment:
			printElmt("Comment", depth)
		case xml.ProcInst:
			printElmt("ProcInst", depth)
		case xml.Directive:
			printElmt("Directive", depth)
		default:
			fmt.Println("Unknown")
		}
	}
}

func printElmt(s string, depth int) {
	for n := 0; n < depth; n++ {
		fmt.Print("  ")
	}
	fmt.Println(s)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ParseXML.go

```go

package main

import (
	"encoding/xml"
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "file")
		os.Exit(1)
	}
	file := os.Args[1]
	bytes, err := ioutil.ReadFile(file)
	checkError(err)
	r := strings.NewReader(string(bytes))

	parser := xml.NewDecoder(r)
	depth := 0
	for {
		token, err := parser.Token()
		if err != nil {
			break
		}
		switch t := token.(type) {
		case xml.StartElement:
			elmt := xml.StartElement(t)
			name := elmt.Name.Local
			printElmt(name, depth)
			depth++
		case xml.EndElement:
			depth--
			elmt := xml.EndElement(t)
			name := elmt.Name.Local
			printElmt(name, depth)
		case xml.CharData:
			bytes := xml.CharData(t)
			printElmt("\""+string([]byte(bytes))+"\"", depth)
		case xml.Comment:
			printElmt("Comment", depth)
		case xml.ProcInst:
			printElmt("ProcInst", depth)
		case xml.Directive:
			printElmt("Directive", depth)
		default:
			fmt.Println("Unknown")
		}
	}
}

func printElmt(s string, depth int) {
	for n := 0; n < depth; n++ {
		fmt.Print("  ")
	}
	fmt.Println(s)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### Unmarshal.go

```go

package main

import (
	"encoding/xml"
	"fmt"
	"os"
	//"strings"
)

type Person struct {
	XMLName Name    `xml:"person"`
	Name    Name    `xml:"name"`
	Email   []Email `xml:"email"`
}

type Name struct {
	Family   string `xml:"family"`
	Personal string `xml:"personal"`
}

type Email struct {
	Type    string `xml:"type,attr"`
	Address string `xml:",chardata"`
}

func main() {
	str := `<?xml version="1.0" encoding="utf-8"?>
<person>
  <name>
    <family> Newmarch </family>
    <personal> Jan </personal>
  </name>
  <email type="personal">
    jan@newmarch.name
  </email>
  <email type="work">
    j.newmarch@boxhill.edu.au
  </email>
</person>`

	var person Person

	err := xml.Unmarshal([]byte(str), &person)
	checkError(err)

	// now use the person structure e.g.
	fmt.Println("Family name: \"" + person.Name.Family + "\"")
	fmt.Println("Second email address: \"" + person.Email[1].Address + "\"")
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 13. Remote Procedure Call

### ArithClient.go

```go

package main

import (
	"net/rpc"
	"fmt"
	"log"
	"os"
)

type Args struct {
	A, B int
}

type Quotient struct {
	Quo, Rem int
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "server")
		os.Exit(1)
	}
	serverAddress := os.Args[1]

	client, err := rpc.DialHTTP("tcp", serverAddress+":1234")
	if err != nil {
		log.Fatal("dialing:", err)
	}
	// Synchronous call
	args := Args{17, 8}
	var reply int
	err = client.Call("Arith.Multiply", args, &reply)
	if err != nil {
		log.Fatal("arith error:", err)
	}
	fmt.Printf("Arith: %d*%d=%d\n", args.A, args.B, reply)

	var quot Quotient
	err = client.Call("Arith.Divide", args, &quot)
	if err != nil {
		log.Fatal("arith error:", err)
	}
	fmt.Printf("Arith: %d/%d=%d remainder %d\n", args.A, args.B, quot.Quo, quot.Rem)

}

```

### ArithServer.go

```go

package main

import (
	"fmt"
	"net/rpc"
	"errors"
	"net/http"
)

type Values struct {
	A, B int
}

type Quotient struct {
	Quo, Rem int
}

type Arith int

func (t *Arith) Multiply(args *Values, reply *int) error {
	*reply = args.A * args.B
	return nil
}

func (t *Arith) Divide(args *Values, quo *Quotient) error {
	if args.B == 0 {
		return errors.New("divide by zero")
	}
	quo.Quo = args.A / args.B
	quo.Rem = args.A % args.B
	return nil
}

func main() {

	arith := new(Arith)
	rpc.Register(arith)
	rpc.HandleHTTP()

	err := http.ListenAndServe(":1234", nil)
	if err != nil {
		fmt.Println(err.Error())
	}
}

```

### ArithServerExp.go

```go

func main() {

	mult := Arith{Mult: func(args *Args, reply *int) error {
		*reply = args.A * args.B
		return nil
	}}
	rpc.Register(mult)
	rpc.HandleHTTP()

	err := http.ListenAndServe(":1234", nil)
	if err != nil {
		fmt.Println(err.Error())
	}
}

```

### JSONArithClient.go

```go

package main

import (
	"net/rpc/jsonrpc"
	"fmt"
	"log"
	"os"
)

type Args struct {
	A, B int
}

type Quotient struct {
	Quo, Rem int
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "server:port")
		log.Fatal(1)
	}
	service := os.Args[1]

	client, err := jsonrpc.Dial("tcp", service)
	if err != nil {
		log.Fatal("dialing:", err)
	}
	// Synchronous call
	args := Args{17, 8}
	var reply int
	err = client.Call("Arith.Multiply", args, &reply)
	if err != nil {
		log.Fatal("arith error:", err)
	}
	fmt.Printf("Arith: %d*%d=%d\n", args.A, args.B, reply)

	var quot Quotient
	err = client.Call("Arith.Divide", args, &quot)
	if err != nil {
		log.Fatal("arith error:", err)
	}
	fmt.Printf("Arith: %d/%d=%d remainder %d\n", args.A, args.B, quot.Quo, quot.Rem)

}

```

### JSONArithServer.go

```go

package main

import (
	"fmt"
	"net/rpc"
	"net/rpc/jsonrpc"
	"os"
	"net"
	"errors"
)
//import ("fmt"; "rpc"; "os"; "net"; "log"; "http")

type Args struct {
	A, B int
}

type Quotient struct {
	Quo, Rem int
}

type Arith int

func (t *Arith) Multiply(args *Args, reply *int) error {
	*reply = args.A * args.B
	return nil
}

func (t *Arith) Divide(args *Args, quo *Quotient) error {
	if args.B == 0 {
		return errors.New("divide by zero")
	}
	quo.Quo = args.A / args.B
	quo.Rem = args.A % args.B
	return nil
}

func main() {

	arith := new(Arith)
	rpc.Register(arith)

	tcpAddr, err := net.ResolveTCPAddr("tcp", ":1234")
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	/* This works:
	rpc.Accept(listener)
	*/
	/* and so does this:
	 */
	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}
		jsonrpc.ServeConn(conn)
	}

}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### TCPArithClient.go

```go

package main

import (
	"net/rpc"
	"fmt"
	"log"
	"os"
)

type Args struct {
	A, B int
}

type Quotient struct {
	Quo, Rem int
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "server:port")
		os.Exit(1)
	}
	service := os.Args[1]

	client, err := rpc.Dial("tcp", service)
	if err != nil {
		log.Fatal("dialing:", err)
	}
	// Synchronous call
	args := Args{17, 8}
	var reply int
	err = client.Call("Arith.Multiply", args, &reply)
	if err != nil {
		log.Fatal("arith error:", err)
	}
	fmt.Printf("Arith: %d*%d=%d\n", args.A, args.B, reply)

	var quot Quotient
	err = client.Call("Arith.Divide", args, &quot)
	if err != nil {
		log.Fatal("arith error:", err)
	}
	fmt.Printf("Arith: %d/%d=%d remainder %d\n", args.A, args.B, quot.Quo, quot.Rem)

}

```

### TCPArithServer.go

```go

package main

import (
	"fmt"
	"net/rpc"
	"errors"
	"net"
	"os"
)

type Args struct {
	A, B int
}

type Quotient struct {
	Quo, Rem int
}

type Arith int

func (t *Arith) Multiply(args *Args, reply *int) error {
	*reply = args.A * args.B
	return nil
}

func (t *Arith) Divide(args *Args, quo *Quotient) error {
	if args.B == 0 {
		return errors.New("divide by zero")
	}
	quo.Quo = args.A / args.B
	quo.Rem = args.A % args.B
	return nil
}

func main() {

	arith := new(Arith)
	rpc.Register(arith)

	tcpAddr, err := net.ResolveTCPAddr("tcp", ":1234")
	checkError(err)

	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	/* This works:
	rpc.Accept(listener)
	*/
	/* and so does this:
	 */
	for {
		conn, err := listener.Accept()
		if err != nil {
			continue
		}
		rpc.ServeConn(conn)
	}

}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 14. REST

### Client.go

```go

package main

import (
	//"encoding/json"
	"encoding/xml"
	"fmt"
	"io/ioutil"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
	"strings"
)

const flashcard_xml string = "application/x.flashcards+xml"
const flashcard_json string = "application/x.flashcards+json"

type FlashcardSets struct {
	XMLName string `xml:"cardsets"`
	CardSet    []CardSet `xml:"cardset"`
}

type CardSet struct {
	XMLName string `xml:"cardset"`
	Name string `xml:"name"`
	Link string `xml:"href,attr"`
	Cards []Card `xml:"card"`
}

type Card  struct {
	Name string `xml:"name"`
	Link string `xml:"href,attr"`
}

func getOneFlashcard(url *url.URL, client *http.Client) string {
	// Get the card as a string, don't do anything with it
	request, err := http.NewRequest("GET", url.String(), nil)
	checkError(err)

	response, err := client.Do(request)
	checkError(err)
	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		fmt.Println(response.Header)

		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	body, err := ioutil.ReadAll(response.Body)
	content := string(body[:])
	//fmt.Printf("Body is %s", content)

	return content
}

func getOneFlashcardSet(url *url.URL, client *http.Client) CardSet {
	// Get one set of cards
	request, err := http.NewRequest("GET", url.String(), nil)
	checkError(err)

	// only accept our media types
	request.Header.Add("Accept", flashcard_xml)
	response, err := client.Do(request)
	checkError(err)
	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		fmt.Println(response.Header)

		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	body, err := ioutil.ReadAll(response.Body)
	content := string(body[:])
	fmt.Printf("Body is %s", content)

	var sets CardSet
	contentType := getContentType(response)
	if contentType == "XML" {

		err = xml.Unmarshal(body, &sets)
		checkError(err)
		fmt.Println("XML: ", sets)
		return sets
	}
	/* else if contentType == "JSON" {
		var sets FlashcardSetsJson
		err = json.Unmarshal(body, &sets)
		checkError(err)
		fmt.Println("JSON: ", sets)
	}
        */
	return sets
}

func getFlashcardSets(url *url.URL, client *http.Client) FlashcardSets {
	// Get the toplevel /
	request, err := http.NewRequest("GET", url.String(), nil)
	checkError(err)

	// only accept our media types
	request.Header.Add("Accept", flashcard_xml)
	response, err := client.Do(request)
	checkError(err)
	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		fmt.Println(response.Header)

		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	body, err := ioutil.ReadAll(response.Body)
	content := string(body[:])
	fmt.Printf("Body is %s", content)

	var sets FlashcardSets
	contentType := getContentType(response)
	if contentType == "XML" {

		err = xml.Unmarshal(body, &sets)
		checkError(err)
		fmt.Println("XML: ", sets)
		return sets
	}
	return sets
}

func createFlashcardSet(url1 *url.URL, client *http.Client, name string) string {
	data := make(url.Values)
	data[`name`] = []string{name}
	response, err := client.PostForm(url1.String(), data)
	checkError(err)
	if response.StatusCode != http.StatusCreated {
		fmt.Println(`Error: `, response.Status)
		return ``
		//os.Exit(2)
	}
	body, err := ioutil.ReadAll(response.Body)
	content := string(body[:])
	return content
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "http://host:port/page")
		os.Exit(1)
	}
	url, err := url.Parse(os.Args[1])
	checkError(err)

	client := &http.Client{}

	// Step 1: get a list of flashcard sets
	flashcardSets := getFlashcardSets(url, client)
	fmt.Println("Step 1: ", flashcardSets)

	// Step 2: try to create a new flashcard set
	new_url := createFlashcardSet(url, client, `NewSet`)
	fmt.Println("Step 2: New flashcard set has URL: ", new_url)

	// Step 3: using the first flashcard set,
	//         get the list of cards in it
	set_url, _ := url.Parse(os.Args[1] + flashcardSets.CardSet[0].Link)

	fmt.Println("Asking for flashcard set URL: ", set_url.String())
	oneFlashcardSet := getOneFlashcardSet(set_url, client)
	fmt.Println("Step 3:", oneFlashcardSet)

	// Step 4: get the contents of one flashcard
	//         be lazy, just get as text/plain and
	//         don't do anything with it
	card_url, _ :=  url.Parse(os.Args[1] + oneFlashcardSet.Cards[0].Link)
	fmt.Println("Asking for URL: ", card_url.String())
	oneFlashcard := getOneFlashcard(card_url, client)
	fmt.Println("Step 4", oneFlashcard)
	os.Exit(0)
}

func getContentType(response *http.Response) string {
	contentType := response.Header.Get("Content-Type")
	if strings.Contains(contentType, flashcard_xml) {
		return "XML"
	}
	if strings.Contains(contentType, flashcard_json) {
		return "JSON"
	}
	return ""
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### ClientJson.go

```go

package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"net/http"
	"net/http/httputil"
	"net/url"
	"os"
	"strings"
	//"reflect"
)

const flashcard_xml string = "application/x.flashcards+xml"
const flashcard_json string = "application/x.flashcards+json"

type FlashcardSets struct {
        XMLName string `xml:"cardsets"`
        CardSet    []CardSet `xml:"cardset"`
}

type CardSet struct {
        XMLName string `xml:"cardset"`
        Name string `xml:"name"`
        Link string `xml:"href,attr"`
        Cards []Card `xml:"card"`
}

type Card  struct {
        Name string `xml:"name"`
        Link string `xml:"href,attr"`
}

type FlashcardSetsJson struct {
	CardSet []CardSetJson `json:"cardsets"`
}
type CardSetJson struct {
	Name string `json:"name"`
	Link string `json:"@id"`
	Cards []CardJson `json:"cardset,omitempty"`
}
type CardJson struct {
	Name string `json:"name"`
	Link string `json:"@id"`
}

func getOneFlashcard(url *url.URL, client *http.Client) string {
	// Get the card as a string, don't do anything with it
	request, err := http.NewRequest("GET", url.String(), nil)
	checkError(err)

	response, err := client.Do(request)
	checkError(err)
	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		fmt.Println(response.Header)

		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	body, err := ioutil.ReadAll(response.Body)
	content := string(body[:])
	//fmt.Printf("Body is %s", content)

	return content
}

func getOneFlashcardSet(url *url.URL, client *http.Client) CardSetJson {
	// Get one set of cards
	request, err := http.NewRequest("GET", url.String(), nil)
	checkError(err)

	// only accept our media types
	request.Header.Add("Accept", flashcard_json)
	response, err := client.Do(request)
	checkError(err)
	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		fmt.Println(response.Header)

		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	body, err := ioutil.ReadAll(response.Body)
	content := string(body[:])
	fmt.Printf("Body is %s", content)

	var sets CardSetJson
	contentType := getContentType(response)
	if contentType == "JSON" {
		err = json.Unmarshal(body, &sets)
		checkError(err)
		fmt.Println("JSON: ", sets)
	}

	return sets
}

func getFlashcardSets(url *url.URL, client *http.Client) FlashcardSetsJson {
	// Get the toplevel /
	request, err := http.NewRequest("GET", url.String(), nil)
	checkError(err)

	// only accept our media types
	request.Header.Add("Accept", flashcard_json)
	response, err := client.Do(request)
	checkError(err)
	if response.Status != "200 OK" {
		fmt.Println(response.Status)
		fmt.Println(response.Header)

		os.Exit(2)
	}

	fmt.Println("The response header is")
	b, _ := httputil.DumpResponse(response, false)
	fmt.Print(string(b))

	body, err := ioutil.ReadAll(response.Body)
	content := string(body[:])
	fmt.Printf("Body is %s", content)

	var sets FlashcardSetsJson
	contentType := getContentType(response)
	if contentType == "JSON" {
		err = json.Unmarshal(body, &sets)
		checkError(err)
		fmt.Println("JSON: ", sets)
		//fmt.Println(reflect.TypeOf(sets))
	}
	return sets
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "http://host:port/page")
		os.Exit(1)
	}
	url, err := url.Parse(os.Args[1])
	checkError(err)

	client := &http.Client{}

	flashcardSets := FlashcardSetsJson{}
	flashcardSets.CardSet = []CardSetJson{CardSetJson{}}
	flashcardSets.CardSet[0].Name = `n1`
	flashcardSets.CardSet[0].Link = `l1`
	//flashcardSets.CardSet[0].Cards = []CardJson{CardJson{Name: `n`, Link: `l`}}
	bytes, _ := json.Marshal(flashcardSets)
	fmt.Println(string(bytes[:]))

	url = url
	client = client

	// Step 1: get a list of flashcard sets
	flashcardSets = getFlashcardSets(url, client)
	fmt.Println("Step1, Cardsets are: ", flashcardSets)

	// Step 2: using the first flashcard set,
	//         get the list of cards in it
	set_url, _ := url.Parse(os.Args[1] + flashcardSets.CardSet[0].Link)
	oneFlashcardSet := getOneFlashcardSet(set_url, client)
	fmt.Println("Step 2: ", oneFlashcardSet)

	// Step 3: get the contents of one flashcard
	//         be lazy, just get as text/plain and
	//         don't do anything with it
	card_url, _ :=  url.Parse(os.Args[1] + oneFlashcardSet.Cards[0].Link)
	fmt.Println("Asking for URL: ", card_url.String())
	oneFlashcard := getOneFlashcard(card_url, client)
	fmt.Println("Step 3", oneFlashcard)

	os.Exit(0)
}

func getContentType(response *http.Response) string {
	contentType := response.Header.Get("Content-Type")
	if strings.Contains(contentType, flashcard_xml) {
		return "XML"
	}
	if strings.Contains(contentType, flashcard_json) {
		return "JSON"
	}
	return ""
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### Server.go

```go

package main

import (
	"fmt"
	"html/template"
	"io/ioutil"
	"net/http"
	"net/url"
	"os"
	"regexp"
	"strconv"
	"strings"
)

type FlashcardSet struct {
	Name string
	Link string
}

type Flashcard struct {
	Name string
	Link string
}

const flashcard_xml string = "application/x.flashcards+xml"
const flashcard_json string = "application/x.flashcards+json"

type ValueQuality struct {
	Value   string
	Quality float64
}

/* Based on https://siongui.github.io/2015/02/22/go-parse-accept-language/ */
func parseValueQuality(s string) []ValueQuality {
	var vqs []ValueQuality

	strs := strings.Split(s, `,`)
	for _, str := range strs {
		trimmedStr := strings.Trim(str, ` `)
		valQ := strings.Split(trimmedStr, `;`)
		if len(valQ) == 1 {
			vq := ValueQuality{valQ[0], 1}
			vqs = append(vqs, vq)
		} else {
			qp := strings.Split(valQ[1], `=`)
			q, err := strconv.ParseFloat(qp[1], 64)
			if err != nil {
				q = 0
			}
			vq := ValueQuality{valQ[0], q}
			vqs = append(vqs, vq)
		}
	}
	return vqs
}

func qualityOfValue(value string, vqs []ValueQuality) float64 {
	for _, vq := range vqs {
		if value == vq.Value {
			return vq.Quality
		}

	}
	return 0
}

func main() {
	if len(os.Args) != 2 {
		fmt.Fprint(os.Stderr, "Usage: ", os.Args[0], ":port\n")
		os.Exit(1)
	}
	port := os.Args[1]

	http.HandleFunc(`/`, handleFlashCardSets)
	files, err := ioutil.ReadDir(`flashcardSets`)
	checkError(err)
	for _, file := range files {
		fmt.Println(file.Name())
		cardset_url := `/flashcardSets/` + url.QueryEscape(file.Name())
		fmt.Println("Adding handlers for ", cardset_url)
		http.HandleFunc(cardset_url, handleOneFlashCardSet)
		http.HandleFunc(cardset_url + `/`, handleOneFlashCard)
	}

	// deliver requests to the handlers
	err = http.ListenAndServe(port, nil)
	checkError(err)
	// That's it!
}

func hasIllegalChars(s string) bool {
	// check against chars to break out of current dir
	b, err := regexp.Match("[/$~]", []byte(s))
	if err != nil {
		fmt.Println(err)
		return true
	}
	if b {
		return true
	}
	return false
}

func handleOneFlashCard(rw http.ResponseWriter, req *http.Request) {
	// should be PathUnescape
	path, _ := url.QueryUnescape(req.URL.String())
	// lose intial '/'
	path = path[1:]
	if req.Method == "GET" {
		fmt.Println("Handling card: ", path)
		json_contents, err := ioutil.ReadFile(path)
		if err != nil {
			rw.WriteHeader(http.StatusNotFound)
			rw.Write([]byte(`Resource not found`))
			return
		}
		// Be lazy here, just return the content as text/plain
		rw.Write(json_contents)
		return
	} else if req.Method == "DELETE" {
		rw.WriteHeader(http.StatusNotImplemented)
	} else {
		rw.WriteHeader(http.StatusMethodNotAllowed)
	}
	return
}

func handleFlashCardSets(rw http.ResponseWriter, req *http.Request) {
	if req.URL.String() != `/` {
		// this function only handles '/'
		rw.WriteHeader(http.StatusNotFound)
		rw.Write([]byte("Resource not found\n"))
		return
	}
	if req.Method == "GET" {
		acceptTypes := parseValueQuality(req.Header.Get("Accept"))
		fmt.Println(acceptTypes)

		q_xml := qualityOfValue(flashcard_xml, acceptTypes)
		q_json := qualityOfValue(flashcard_json, acceptTypes)
		if q_xml == 0 && q_json == 0 {
			// can't find XML or JSON in Accept header
			rw.Header().Set("Content-Type", "flashcards+xml, flashcards+json")
			rw.WriteHeader(http.StatusNotAcceptable)
			return
		}

		files, err := ioutil.ReadDir(`flashcardSets`)
		checkError(err)
		numfiles := len(files)
		cardSets := make([]FlashcardSet, numfiles, numfiles)
		for n, file := range files {
			fmt.Println(file.Name())
			cardSets[n].Name = file.Name()
			// should be PathEscape, not in go 1.6
			cardSets[n].Link = `/flashcardSets/` + url.QueryEscape(file.Name())
		}

		if q_xml >= q_json {
			// XML preferred
			t, err := template.ParseFiles("xml/ListFlashcardSets.xml")
			if err != nil {
				fmt.Println("Template error")
				http.Error(rw, err.Error(), http.StatusInternalServerError)
				return
			}
			rw.Header().Set("Content-Type", flashcard_xml)
			t.Execute(rw, cardSets)
		} else {
			// JSON preferred
			t, err := template.ParseFiles("json/ListFlashcardSets.json")
			if err != nil {
				fmt.Println("Template error")
				http.Error(rw, err.Error(), http.StatusInternalServerError)
				return
			}
			rw.Header().Set("Content-Type", flashcard_json)
			t.Execute(rw, cardSets)

		}
	} else if req.Method == "POST" {
		name := req.FormValue(`name`)
		if hasIllegalChars(name) {
			rw.WriteHeader(http.StatusForbidden)
			return
		}
		// lose all spaces as they are a nuisance
		name = strings.Replace(name, ` `, ``, -1)
		err := os.Mkdir(`flashcardSets/`+name,
			(os.ModeDir | os.ModePerm))
		if err != nil {
			rw.WriteHeader(http.StatusForbidden)
			return
		}
		rw.WriteHeader(http.StatusCreated)
		base_url := req.URL.String()
		new_url := base_url + `flashcardSets/` + name + `/`
		rw.Write([]byte(new_url))
	} else {
		rw.WriteHeader(http.StatusMethodNotAllowed)
	}
	return
}

func handleOneFlashCardSet(rw http.ResponseWriter, req *http.Request) {
	cooked_url, _ := url.QueryUnescape(req.URL.String())
	fmt.Println("Handling one set for: ", cooked_url)

	if req.Method == "GET" {
		acceptTypes := parseValueQuality(req.Header.Get("Accept"))
		fmt.Println(acceptTypes)

		q_xml := qualityOfValue(flashcard_xml, acceptTypes)
		q_json := qualityOfValue(flashcard_json, acceptTypes)
		if q_xml == 0 && q_json == 0 {
			// can't find XML or JSON in Accept header
			rw.Header().Set("Content-Type", "flashcards+xml, flashcards+json")
			rw.WriteHeader(http.StatusNotAcceptable)
			return
		}

		path := req.URL.String()
		// lose leading /
		relative_path := path[1:]
		files, err := ioutil.ReadDir(relative_path)
		checkError(err)
		numfiles := len(files)
		cards := make([]Flashcard, numfiles, numfiles)
		for n, file := range files {
			fmt.Println(file.Name())
			cards[n].Name = file.Name()
			// should be PathEscape, not in go 1.6
			cards[n].Link = path + `/` + url.QueryEscape(file.Name())
		}

		if q_xml >= q_json {
			// XML preferred
			t, err := template.ParseFiles("xml/ListOneFlashcardSet.xml")
			if err != nil {
				fmt.Println("Template error")
				http.Error(rw, err.Error(), http.StatusInternalServerError)
				return
			}
			rw.Header().Set("Content-Type", flashcard_xml)
			t.Execute(os.Stdout, cards)
			t.Execute(rw, cards)
		} else {
			// JSON preferred
			t, err := template.ParseFiles("json/ListOneFlashcardSet.json")
			if err != nil {
				fmt.Println("Template error", err)
				http.Error(rw, err.Error(), http.StatusInternalServerError)
				return
			}
			rw.Header().Set("Content-Type", flashcard_json)
			t.Execute(rw, cards)

		}
	} else if req.Method == "POST" {
		name := req.FormValue(`name`)
		if hasIllegalChars(name) {
			rw.WriteHeader(http.StatusForbidden)
			return
		}
		err := os.Mkdir(`flashcardSets/`+name,
			(os.ModeDir | os.ModePerm))
		if err != nil {
			rw.WriteHeader(http.StatusForbidden)
			return
		}
		rw.WriteHeader(http.StatusCreated)
		base_url := req.URL.String()
		new_url := base_url + `flashcardSets/` + name
		_, _ = rw.Write([]byte(new_url))
	} else if req.Method == "DELETE" {
		rw.WriteHeader(http.StatusNotImplemented)
	} else {
		rw.WriteHeader(http.StatusMethodNotAllowed)
	}
	return
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

## 15. WebSockets

### EchoClient.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"io"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "ws://host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := websocket.Dial(service, "", "http://localhost:12345")
	checkError(err)
	var msg string
	for {
		err := websocket.Message.Receive(conn, &msg)
		if err != nil {
			if err == io.EOF {
				// graceful shutdown by server
				break
			}
			fmt.Println("Couldn't receive msg " + err.Error())
			break
		}
		fmt.Println("Received from server: " + msg)
		// return the msg
		err = websocket.Message.Send(conn, msg)
		if err != nil {
			fmt.Println("Coduln't return msg")
			break
		}
	}
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### EchoClientGorilla.go

```go

package main

import (
	"fmt"
	"github.com/gorilla/websocket"
	"io"
	"net/http"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "ws://host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	header := make(http.Header)
	header.Add("Origin", "http://localhost:12345")
	conn, _, err := websocket.DefaultDialer.Dial(service, header)
	checkError(err)

	for {
		//fmt.Println(`Readfnig msg`)
		_, reply, err := conn.ReadMessage()
		//fmt.Println(`Read msg`, err)
		if err != nil {
			// fmt.Println(err)
			if err == io.EOF {
				// graceful shutdown by server
				fmt.Println(`EOF from server`)
				break
			}
			if websocket.IsCloseError(err, websocket.CloseAbnormalClosure) {
				fmt.Println(`Close from server`)
				break
			}
			fmt.Println("Couldn't receive msg " + err.Error())
			break
		}
		//checkError(err)
		fmt.Println("Received from server: " + string(reply[:]))

		// return the msg
		err = conn.WriteMessage(websocket.TextMessage, reply)
		if err != nil {
			fmt.Println("Couldn't return msg")
			break
		}
	}
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### EchoClientTLS.go

```go

package main

import (
	"fmt"
	"crypto/tls"
	"golang.org/x/net/websocket"
	"io"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "wss://host:port")
		os.Exit(1)
	}

	config, err := websocket.NewConfig(os.Args[1], "http://localhost")
	checkError(err)
	tlsConfig := &tls.Config{InsecureSkipVerify: true}
	config.TlsConfig = tlsConfig

	conn, err := websocket.DialConfig(config)
	checkError(err)
	var msg string
	for {
		err := websocket.Message.Receive(conn, &msg)
		if err != nil {
			if err == io.EOF {
				// graceful shutdown by server
				break
			}
			fmt.Println("Couldn't receive msg " + err.Error())
			break
		}
		fmt.Println("Received from server: " + msg)
		// return the msg
		err = websocket.Message.Send(conn, msg)
		if err != nil {
			fmt.Println("Coduln't return msg")
			break
		}
	}
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### EchoServer.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"net/http"
	"os"
)

func Echo(ws *websocket.Conn) {
	fmt.Println("Echoing")

	for n := 0; n < 10; n++ {
		msg := "Hello  " + string(n+48)
		fmt.Println("Sending to client: " + msg)
		err := websocket.Message.Send(ws, msg)
		if err != nil {
			fmt.Println("Can't send")
			break
		}

		var reply string
		err = websocket.Message.Receive(ws, &reply)
		if err != nil {
			fmt.Println("Can't receive")
			break
		}
		fmt.Println("Received back from client: " + reply)
	}
}

func main() {

	http.Handle("/", websocket.Handler(Echo))
	err := http.ListenAndServe(":12345", nil)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### EchoServerGorilla.go

```go

package main

import (
	"fmt"
	"github.com/gorilla/websocket"
	"net/http"
	"os"
)

var upgrader = websocket.Upgrader{
	ReadBufferSize:  1024,
	WriteBufferSize: 1024,
}

func Handler(w http.ResponseWriter, r *http.Request) {
	fmt.Println("Handling /")
	conn, err := upgrader.Upgrade(w, r, nil)
	if err != nil {
		fmt.Println(err)
		return
	}

	for n := 0; n < 10; n++ {
		msg := "Hello  " + string(n+48)
		fmt.Println("Sending to client: " + msg)
		err = conn.WriteMessage(websocket.TextMessage, []byte(msg))

		_, reply, err := conn.ReadMessage()
		if err != nil {
			fmt.Println("Can't receive")
			break
		}
		fmt.Println("Received back from client: " + string(reply[:]))
	}
	conn.Close()
}

func main() {
	http.HandleFunc("/", Handler)
	err := http.ListenAndServe("localhost:12345", nil)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### EchoServerTLS.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"net/http"
	"os"
)

func Echo(ws *websocket.Conn) {
	fmt.Println("Echoing")

	for n := 0; n < 10; n++ {
		msg := "Hello  " + string(n+48)
		fmt.Println("Sending to client: " + msg)
		err := websocket.Message.Send(ws, msg)
		if err != nil {
			fmt.Println("Can't send")
			break
		}

		var reply string
		err = websocket.Message.Receive(ws, &reply)
		if err != nil {
			fmt.Println("Can't receive")
			break
		}
		fmt.Println("Received back from client: " + reply)
	}
}

func main() {

	http.Handle("/", websocket.Handler(Echo))
	err := http.ListenAndServeTLS(":12345", "jan.newmarch.name.pem",
		"private.pem", nil)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PersonClientJSON.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"os"
)

type Person struct {
	Name   string
	Emails []string
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "ws://host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := websocket.Dial(service, "",
		"http://localhost")
	checkError(err)

	person := Person{Name: "Jan",
		Emails: []string{"ja@newmarch.name", "jan.newmarch@gmail.com"},
	}

	err = websocket.JSON.Send(conn, person)
	if err != nil {
		fmt.Println("Couldn't send msg " + err.Error())
	}
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PersonClientProtocol.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"os"
	"xmlcodec"
)

type Person struct {
	Name   string
	Emails []string
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "ws://host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	config, err := websocket.NewConfig(service, "http://localhost")
	checkError(err)
	config.Protocol = []string{"json", "xml"}
	conn, err := websocket.DialConfig(config)
	checkError(err)

	person := Person{Name: "Jan",
		Emails: []string{"ja@newmarch.name", "jan.newmarch@gmail.com"},
	}

	proto := conn.Config().Protocol
	if len(proto) == 1 {
		if proto[0] == "json" {
			err = websocket.JSON.Send(conn, person)
			if err != nil {
				fmt.Println("Couldn't send msg " + err.Error())
			}
		} else {
			err = xmlcodec.XMLCodec.Send(conn, person)
			if err != nil {
				fmt.Println("Couldn't send msg " + err.Error())
			}
		}
	}
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PersonClientXML.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"os"
	"xmlcodec"
)

type Person struct {
	Name   string
	Emails []string
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("Usage: ", os.Args[0], "ws://host:port")
		os.Exit(1)
	}
	service := os.Args[1]

	conn, err := websocket.Dial(service, "", "http://localhost")
	checkError(err)

	person := Person{Name: "Jan",
		Emails: []string{"ja@newmarch.name", "jan.newmarch@gmail.com"},
	}

	err = xmlcodec.XMLCodec.Send(conn, person)
	if err != nil {
		fmt.Println("Couldn't send msg " + err.Error())
	}
	os.Exit(0)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PersonServerJSON.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"net/http"
	"os"
)

type Person struct {
	Name   string
	Emails []string
}

func ReceivePerson(ws *websocket.Conn) {
	var person Person
	err := websocket.JSON.Receive(ws, &person)
	if err != nil {
		fmt.Println("Can't receive")
	} else {

		fmt.Println("Name: " + person.Name)
		for _, e := range person.Emails {
			fmt.Println("An email: " + e)
		}
	}
}

func main() {

	http.Handle("/", websocket.Handler(ReceivePerson))
	err := http.ListenAndServe(":12345", nil)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PersonServerProtocol.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"net/http"
	"os"
	"xmlcodec"
)

var protocolChosen string

type Person struct {
	Name   string
	Emails []string
}

func Echo(ws *websocket.Conn) {
	var person Person
	var err error

	protos := ws.Config().Protocol
	if len(protos) != 1 {
		os.Exit(1)
	}
	protocolChosen := protos[0]
	if protocolChosen == "json" {
		err = websocket.JSON.Receive(ws, &person)
	} else {
		err = xmlcodec.XMLCodec.Receive(ws, &person)
	}
	if err != nil {
		fmt.Println("Can't receive")
	} else {

		fmt.Println("Name: " + person.Name)
		for _, e := range person.Emails {
			fmt.Println("An email: " + e)
		}
	}
}

func Chooser(clientProtos []string) (string, error) {
	// See if any of the server's preferences are listed
	// in the client's offerings - server takes precedence
	acceptableProtos := []string{"xml", "json"}
	if len(clientProtos) > 1 {
		for _, p := range acceptableProtos {
			for _, q := range clientProtos {
				if p == q {
					return p, nil
				}
			}
		}
	}
	// no match
	return "", nil
}

func main() {
	handler := websocket.Handler(Echo)
	handler.ProtocolChooser = Chooser
	http.Handle("/", handler)
	err := http.ListenAndServe(":12345", nil)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### PersonServerXML.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"net/http"
	"os"
	"xmlcodec"
)

type Person struct {
	Name   string
	Emails []string
}

func ReceivePerson(ws *websocket.Conn) {
	var person Person
	err := xmlcodec.XMLCodec.Receive(ws, &person)
	if err != nil {
		fmt.Println("Can't receive")
	} else {

		fmt.Println("Name: " + person.Name)
		for _, e := range person.Emails {
			fmt.Println("An email: " + e)
		}
	}
}

func main() {

	http.Handle("/", websocket.Handler(ReceivePerson))
	err := http.ListenAndServe(":12345", nil)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### TemperatureServer.go

```go

package main

import (
	"fmt"
	"golang.org/x/net/websocket"
	"net/http"
	"os"
	"os/exec"
	"time"
)

var ROOT_DIR = "/home/httpd/html/golang-hidden/websockets"

func GetTemp(ws *websocket.Conn) {
	for {

		msg, _ := exec.Command("sensors").Output()
		fmt.Println("Sending to client: " + string(msg[:]))
		err := websocket.Message.Send(ws, string(msg[:]))
		if err != nil {
			fmt.Println("Can't send")
			break
		}
		time.Sleep(2 * 1000 * 1000 * 1000)

		var reply string
		err = websocket.Message.Receive(ws, &reply)
		if err != nil {
			fmt.Println("Can't receive")
			break
		}
		fmt.Println("Received back from client: " + reply)
	}
}

func main() {
	fileServer := http.FileServer(http.Dir(ROOT_DIR))
	http.Handle("/GetTemp", websocket.Handler(GetTemp))
	http.Handle("/", fileServer)
	err := http.ListenAndServe(":12345", nil)
	checkError(err)
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

### XML.go

```go

package xml

import (
	"bytes"
	"encoding/xml"
	"fmt"
	"io"
	"os"
	"reflect"
	"websocket"
)

type Person struct {
	Name   string
	Emails []string
}

func main() {
	person := Person{Name: "Jan",
		Emails: []string{"jan@newmarch.name", "jan.newmarch@gmail.com"},
	}
	msg, typ, _ := xmlMarshal(person)
	fmt.Println(string(msg))

	var p Person
	xmlUnmarshal(msg, typ, &p)
	fmt.Println(p.Name + p.Emails[0])
}

func xmlMarshal(v interface{}) (msg []byte, payloadType byte, err error) {
	buff := bytes.NewBufferString("")
	Marshal(v, buff)
	msg = buff.Bytes()
	return msg, websocket.TextFrame, nil
}

func xmlUnmarshal(msg []byte, payloadType byte, v interface{}) (err error) {
	r := bytes.NewBuffer(msg)
	err = xml.Unmarshal(r, v)
	return err
}

func Marshal(e interface{}, w io.Writer) {
	// make it a legal XML document
	w.Write([]byte("<?xml version=\"1.1\" encoding=\"UTF-8\" ?>\n"))

	// topvel e is a value and has no structure field,
	// so use its type
	typ := reflect.TypeOf(e)
	name := typ.Name()

	startTag(name, w)
	MarshalValue(reflect.ValueOf(e), w)
	endTag(name, w)
}

func MarshalValue(v reflect.Value, w io.Writer) {
	t := v.Type()
	switch t.Kind() {
	case reflect.Struct:
		for n := 0; n < t.NumField(); n++ {
			field := t.Field(n)

			vv := v

			// special case if it is a slice

			if vv.Field(n).Type().Kind() == reflect.Slice {
				// slice
				MarshalSliceValue(field.Name,
					vv.Field(n), w)
			} else {
				// not a slice
				startTag(field.Name, w)
				MarshalValue(vv.Field(n), w)
				endTag(field.Name, w)
			}
		}
	case reflect.Int, reflect.Int8, reflect.Int16, reflect.Int32, reflect.Int64, reflect.Uint, reflect.Uint8, reflect.Uint16, reflect.Uint32, reflect.Uint64, reflect.Uintptr:
	case reflect.Bool:
	case reflect.String:
		vv := v
		w.Write([]byte("   " + vv.String() + "\n"))
	default:
	}
}

func MarshalSliceValue(tag string, v reflect.Value, w io.Writer) {
	for n := 0; n < v.Len(); n++ {
		startTag(tag, w)
		MarshalValue(v.Index(n), w)
		endTag(tag, w)
	}
}

func startTag(s string, w io.Writer) {
	w.Write([]byte("<" + s + ">\n"))
}

func endTag(s string, w io.Writer) {
	w.Write([]byte("</" + s + ">\n"))
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error ", err.Error())
		os.Exit(1)
	}
}

```

