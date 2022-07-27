FROM --platform=linux/amd64 ubuntu:20.04 as builder

RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential libgtk-3-dev libasound2-dev libpulse-dev libjack-dev

COPY . /repo
WORKDIR /repo
RUN cp /repo/makefiles/makefile.defs.linux.barren /repo/makefile.defs
RUN make -j8

FROM ubuntu:20.04 as package
COPY --from=builder /repo/praat_barren /
