#include "INote.h"

class Note_16 : public INote {
public:
    Note_16() = default;
    Note_16(INote *next): _next{ next }{ }

    virtual ~Note_16() = default;
    virtual std::string type() const noexcept { return "16"; }
    virtual std::string lexical() const noexcept { return "#ena"; }
    virtual INote* next() noexcept { return _next; }

private:
    INote *_next;
};