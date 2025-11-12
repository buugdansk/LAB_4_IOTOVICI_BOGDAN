#include "Review.h"

Review::Review(string content, const Client* reviewer) {
    this->content = content;
    this->reviewer = reviewer;
}

string Review::getContent() const {
    return this->content;
}

const Client* Review::getReviewer() const {
    return this->reviewer;
}