namespace Psr\Http\Message;

interface MessageInterface
{
    public function getProtocolVersion() -> string;

    public function withProtocolVersion(string version);

    public function getHeaders() -> array;
    
    public function hasHeader(string name) -> boolean;

    public function getHeader(string name) -> array;

    public function getHeaderLine(string name) -> string;

    public function withHeader(string name, var value);

    public function withAddedHeader(string name, var value);

    public function withoutHeader(string name);

    public function getBody() -> <StreamInterface>;

    public function withBody(<StreamInterface> body);
}
