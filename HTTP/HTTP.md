# HTTP

**HTTP** is a protocol for fetching resources such as HTML documents. It is the foundation of any data exchange on the Web and it is a client-server protocol, which means requests are initiated by the recipient, usually the Web browser. A complete document is reconstructed from the different sub-documents fetched, for instance, text, layout description, images, videos, scripts, and more.

Clients and servers communicate by exchanging individual messages (as opposed to a stream of data). The messages sent by the client, usually a Web browser, are called *requests*
 and the messages sent by the server as an answer are called *responses.*

Designed in the early 1990s, HTTP is an extensible protocol which has evolved over time. Due to its extensibility, it is used to not only fetch hypertext documents, but also images and videos or to post content to servers, like with HTML form results. HTTP can also be used to fetch parts of documents to update Web pages on demand.

## Basic aspects of HTTP

### **HTTP is simple:**

HTTP is generally designed to be simple and human readable. HTTP messages can be read and understood by humans

### **HTTP is extensible:**

Introduced in HTTP/1.0, HTTP headers make this protocol easy to extend and experiment with. New functionality can even be introduced by a simple agreement between a client and a server about a new header's semantics.

### **HTTP and connections:**

A connection is controlled at the transport layer, and therefore fundamentally out of scope for HTTP. HTTP doesn't require the underlying transport protocol to be connection-based; it only requires it to be reliable, or not lose messages (at minimum, presenting an error in such cases). Among the two most common transport protocols on the Internet, *TCP* is reliable and *UDP* isn't. HTTP therefore relies on the *TCP* standard, which is connection-based.

## **APIs based on HTTP**

The most commonly used API based on HTTP is the `XMLHttpRequest` API, which can be used to exchange data between a user agent and a server. The modern `Fetch API` provides the same features with a more powerful and flexible feature set.

Another API, server-sent events, is a one-way service that allows a server to send events to the client, using HTTP as a transport mechanism. Using the `EventSource` interface, the client opens a connection and establishes event handlers. The client browser automatically converts the messages that arrive on the HTTP stream into appropriate `Event` objects. Then it delivers them to the event handlers that have been registered for the events' `type` if known, or to the `onmessage` event handler if no type-specific event handler was established.