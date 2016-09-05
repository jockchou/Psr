namespace Psr\Http\Message;

interface StreamInterface
{
    const SEEK_SET = 0;
    const SEEK_CUR = 1;
    const SEEK_END = 2;
	
    public function __toString() -> string;

    public function close() -> void;

    public function detach() -> resource|null;

    public function getSize() -> int | null;

    public function tell() -> int;

    public function eof() -> boolean;

    public function isSeekable() -> boolean;

    public function seek(int offset, int whence = self::SEEK_SET);

    public function rewind();

    public function isWritable() -> boolean;

    public function write(string str) -> int;

    public function isReadable() -> boolean;

    public function read(int length) -> string;

    public function getContents() -> string;

    public function getMetadata(key = null) -> var;
}
