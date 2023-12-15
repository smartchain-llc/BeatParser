#pragma once

class TimeSignature {
public:
    virtual int beats_per_measure() const noexcept = 0;
    virtual int counted_note() const noexcept = 0;
};